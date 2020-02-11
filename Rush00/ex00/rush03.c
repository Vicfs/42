/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vferrare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 21:50:35 by vferrare          #+#    #+#             */
/*   Updated: 2019/10/06 21:50:42 by vferrare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	printn(int x, char c)
{
	int j;

	j = 0;
	while (j < x - 2)
	{
		ft_putchar(c);
		j = j + 1;
	}
}

void	fl_char(int f)
{
	if (f == 0)
		ft_putchar('A');
	else
		ft_putchar('C');
}

int		rush(int x, int y)
{
	int i;

	i = 0;
	while (i < y && x != 0)
	{
		if (i == 0 || i == y - 1)
		{
			fl_char(0);
			printn(x, 'B');
			if (x != 1)
				fl_char(1);
		}
		else
		{
			ft_putchar('B');
			printn(x, ' ');
			if (x != 1)
				ft_putchar('B');
		}
		ft_putchar('\n');
		i = i + 1;
	}
	return (0);
}
