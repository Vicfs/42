/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vferrare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 20:53:49 by vferrare          #+#    #+#             */
/*   Updated: 2019/10/08 14:37:25 by vferrare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	imprime(int a, int b, int c, int d)
{
	if (a * 10 + b < c * 10 + d)
	{
		a = a + 48;
		b = b + 48;
		c = c + 48;
		d = d + 48;
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, " ", 1);
		write(1, &c, 1);
		write(1, &d, 1);
		if ((a - 48) * 10 + (b - 48) < 98)
			write(1, ", ", 2);
	}
}

void	enquanto(int a, int b, int c, int d)
{
	a = 0;
	while (a < 10)
	{
		b = 0;
		while (b < 10)
		{
			c = 0;
			while (c < 10)
			{
				d = 0;
				while (d < 10)
				{
					imprime(a, b, c, d);
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;
	int c;
	int d;

	a = 0;
	b = 0;
	c = 0;
	d = 0;
	enquanto(a, b, c, d);
}
