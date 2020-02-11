/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vferrare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 16:21:34 by vferrare          #+#    #+#             */
/*   Updated: 2019/10/21 04:29:12 by vferrare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		repetido(char *str, int len)
{
	int i;
	int j;

	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		mais_e_menos(char *str, int len)
{
	int i;

	i = 0;
	while (i < len)
	{
		if (str[i] == '+' || str[i] == '-')
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	long	nb;

	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	nb = nbr;
	len = 0;
	while (base[len] != 0)
		len++;
	if (len > 1 && repetido(base, len) == 1 && mais_e_menos(base, len) == 1
			&& nbr != 0)
	{
		ft_putnbr_base(nbr / len, base);
		ft_putchar(base[nbr % len]);
	}
}
