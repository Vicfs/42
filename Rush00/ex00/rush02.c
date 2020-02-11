/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vferrare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 19:11:02 by vferrare          #+#    #+#             */
/*   Updated: 2019/10/06 20:33:14 by vferrare         ###   ########.fr       */
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
			fl_char(i);
			printn(x, 'B');
			if (x != 1)
			{
				fl_char(i);
			}
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
