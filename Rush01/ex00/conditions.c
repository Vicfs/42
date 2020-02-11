int		search_number(int tab[6][6], int a, int b, int n)
{
	int i;

	i = 1;
	while (i <= 4)
	{
		if (n == tab[a][i])
			return (0);
		i++;
	}
	i = 1;
	while (i <= 4)
	{
		if (n == tab[i][b])
			return (0);
		i++;
	}
	return (1);
}

int filled_tab(int tab[6][6])
{
	int i;
	int j;

	i = 1;
	while (i < 5)
	{
		j = 1;
		while (j < 5)
			if (tab[i][j] == 0)
				return (0);
			j++;
		i++;
	}
	return (1);
}