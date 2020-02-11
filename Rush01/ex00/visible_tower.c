int		*col_transform(int tab[6][6], int c, int d)
{
	int *list[4];
	int a;
	int b;

	a = c;
	b = d;
	if (a == 0)
	{
		while (a < 4)
		{
			list[a] = &tab[a + 1][b];
			a++;
		}
	}
	if (a == 5)
	{
		while (a > 0)
		{
			list[4 - a] = &tab[a - 1][b];
			a--;
		}
	}
	return (*list);
}

int		*row_transform(int tab[6][6], int c, int d)
{
	int *list[4];
	int a;
	int b;

	a = c;
	b = d;
	if (b == 0)
	{
		while (b < 4)
		{
			list[b] = &tab[a][b + 1];
			b++;
		}
	}
	if (b == 5)
	{
		while (b > 0)
		{
			list[4 - b] = &tab[a][b - 1];
			b--;
		}
	}
	return (*list);
}

int		visible_towers(int tab[6][6], int a, int b)
{
	int i;
	int big;
	int list[4];
	int number;

	i = 0;
	number = 1;
	if (a == 0 || a == 5)
		*list = *col_transform(tab, a, b);
	if (b == 0 || b == 5)
		*list = *row_transform(tab, a, b);
	big = list[0];
	while (i <= 3)
	{
		if (list[i + 1] > big)
		{
			big = list[i + 1];
			number++;
		}
		i++;
	}
	return (number);
}

int		all_visible_towers(int tab[6][6])
{
	int i;

	i = 1;
	while (i <= 4)
	{
		if (tab[0][i] != visible_towers(tab, 0, i))
			return (0);
		if (tab[5][i] != visible_towers(tab, 5, i))
			return (0);
		if (tab[i][0] != visible_towers(tab, i, 0))
			return (0);
		if (tab[i][5] != visible_towers(tab, i, 5))
			return (0);
		i++;
	}
	return (1);
}