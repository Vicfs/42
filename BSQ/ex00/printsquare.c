/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printsquare.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vferrare <vferrare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 14:45:48 by vferrare          #+#    #+#             */
/*   Updated: 2019/10/23 16:06:04 by vferrare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, &(*str), 1);
		str++;
	}
}

void	print_tab(int **tab, int linha, int coluna)
{
	char	c;
	int		i;
	int		j;

	i = -1;
	while (i++ < linha)
	{
		j = -1;
		while (j++ < coluna)
		{
			c = tab[i][j] + '0';
			write(1, &c, 1);
			if (j < coluna)
				write(1, " ", 1);
		}
		if (i < linha)
			write(1, "\n", 1);
	}
}