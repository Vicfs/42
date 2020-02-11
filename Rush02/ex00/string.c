/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vferrare <vferrare-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 21:00:32 by vferrare            #+#    #+#             */
/*   Updated: 2019/10/22 12:22:46 by vferrare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_strlen(char *str)
{
	int length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

void	print_string(char *linha, int index)
{
	int i;

	i = 0;
	while (linha[i] != ':')
		i++;
	while (linha[i] == ' ')
		i++;
	while (linha[++i] != '\n')
	{
		if (linha[i] == ' ')
		{
			if (linha[i - 1] != ' ')
			{
				if (index != 0)
				{
					write(1, &linha[i], 1);
					index++;
				}
			}
		}
		else
			write(1, &linha[i], 1);
	}
}
