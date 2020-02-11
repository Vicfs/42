/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vferrare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 22:06:59 by vferrare          #+#    #+#             */
/*   Updated: 2019/10/06 22:07:08 by vferrare         ###   ########.fr       */
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

int		rush(int x, int y)
{
	int i;

	i = 0;
	while (i < y && x != 0)
	{
		if (i == 0 || i == y - 1)
		{
			ft_putchar('o');
			printn(x, '-');
			if (x != 1)
			{
				ft_putchar('o');
			}
		}
		else
		{
			ft_putchar('|');
			printn(x, ' ');
			if (x != 1)
				ft_putchar('|');
		}
		ft_putchar('\n');
		i = i + 1;
	}
	return (0);
}
