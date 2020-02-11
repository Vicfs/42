#include <stdio.h>

int		all_visible_towers(int tab[6][6]);
int		search_number(int tab[6][6], int a, int b, int n);
int		filled_tab(int tab[6][6]);
void	print_tab(int tab[6][6]);
void	ft_putchar(char c);

void	fill_with_zero(int tab[6][6])
{
	int i;
	int j;

	i = 0;
	while (i <= 5)
	{
		j = 0;
		while (j <= 5)
		{
			tab[i][j] = 0;
			j++;
		}
		i++;
	}
}


int		ft_atoi(char str)
{
	int	a;

	a = 0;
	a =str - 48;
	return (a);
}

void	put_args(int tab[6][6], int argv[])
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (j < 5)
	{
		while (i < 4 * j)
		{
			if (j == 1)
				tab[0][(i % 4) + 1] = argv[i];
			if (j == 2)
				tab[5][(i % 4) + 1] = argv[i];
			if (j == 3)
				tab[(i % 4) + 1][0] = argv[i];
			if (j == 4)
				tab[(i % 4) + 1][5] = argv[i];
			i++;
		}
		j++;
	}
}

void	sudoku(int tab[6][6], int line, int column)
{
	int n;
	int newline;
	int newcolumn;
	int i;
	int j;

	print_tab(tab);
	n = 1;
	while (n <= 4)
	{
		if (search_number(tab, line, column, n) == 1)
		{
			tab[line][column] = n;
			print_tab(tab);
		}
		if (filled_tab(tab) == 1 && all_visible_towers(tab) == 1)
		{
			print_tab(tab);
			break;
		}
		else if (column == 4 && line == 4)
			break;
		else if (column == 4)
		{
			newcolumn = 1;
			newline = line + 1;
			sudoku(tab, newline, newcolumn);
		}
		else
		{
			printf("asd");
			newcolumn = column + 1;
			newline = line;
			sudoku(tab, newline, newcolumn);
		}
		n++;
	}
	tab[line][column] = 0;
}

int		main(int argc, char *argv[])
{
	int tab[6][6];
	int paramt[17];
	int i;
	int even;

	fill_with_zero(tab);
	i = 0;
	even = 0;
	while (even <= 30)
	{
		paramt[i] = ft_atoi(argv[1][even]);
		printf("asd %d\n", paramt[i]);
		i++;
		even += 2;
	}
	if (argc == 2)
	{
		put_args(tab, paramt);
		printf("teste");
		sudoku(tab, 1, 1);
	}
	printf("teste");
	return (0);
}