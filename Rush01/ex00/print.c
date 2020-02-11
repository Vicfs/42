#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_tab(int tab[6][6])
{
	int l;
	int c;

	l = 1;
	while (l < 5)
	{
		c = 1;
		while (c < 5)
		{
			ft_putchar(tab[l][c] + 48);
			if (c != 4)
				ft_putchar(' ');
			else
				ft_putchar('\n');
			c++;
		}
		l++;
	}
}