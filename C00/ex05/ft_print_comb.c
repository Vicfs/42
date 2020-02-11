/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vferrare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 14:07:47 by vferrare          #+#    #+#             */
/*   Updated: 2019/10/08 14:36:35 by vferrare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printn(int a, int b, int c)
{
	a = a + 48;
	b = b + 48;
	c = c + 48;
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a < 7 + 48)
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = 0;
	while (a < 10)
	{
		b = 0;
		while (b < 10)
		{
			c = 0;
			while (c < 10)
			{
				if (a < b && b < c)
					printn(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
