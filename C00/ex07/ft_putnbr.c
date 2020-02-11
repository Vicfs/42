/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vferrare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 21:55:20 by vferrare          #+#    #+#             */
/*   Updated: 2019/10/08 14:03:54 by vferrare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		n_de_alg(int nb)
{
	int nc;
	int max;

	nc = 1;
	max = 10;
	while (max <= nb)
	{
		max = max * 10;
		nc = nc + 1;
	}
	return (nc);
}

int		pot(int x, int a)
{
	int r;

	r = 1;
	while (a > 0)
	{
		r = r * x;
		a--;
	}
	return (r);
}

void	ft_putnbr(int nb)
{
	int nalg;
	int c;

	nalg = n_de_alg(nb);
	while (0 < nalg)
	{
		c = nb / pot(10, nalg - 1);
		nb = nb - c * pot(10, nalg - 1);
		c = c + 48;
		write(1, &c, 1);
		nalg--;
	}
}
