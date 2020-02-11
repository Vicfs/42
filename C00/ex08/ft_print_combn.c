/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vferrare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:06:10 by vferrare          #+#    #+#             */
/*   Updated: 2019/10/08 14:26:40 by vferrare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int print(int a, int b, int c, int d, int e, int f, int g, int h, int i, int n)
{
	while (a < 10)
	{
		if (a < b && b < c && c < d && d < e && e < f && f < g && g < h && h < i)
		{
			write(1, &a, 1);
			if (n == 1)
				return (0);
			a++;
			write(1, &b, 1);
		}
	}
		return (0);
}

void	ft_print_combn(int n)
{
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;
	int g;
	int h;
	int i;
	
	a = 0;
	b = 0;
	c = 0;
	d = 0;
	e = 0;
	f = 0;
	g = 0;
	h = 0;
	i = 0;
	print(a, b, c, d, e, f, g, h, i, n);
}
