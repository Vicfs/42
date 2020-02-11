/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vferrare <vferrare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 11:07:33 by vferrare          #+#    #+#             */
/*   Updated: 2019/10/23 16:50:04 by vferrare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int		check_errors(char *map)
{
	int i;
	int j;

	i = 0;
	while (map[i] != '\n' || map[i] < 32 || map[i] > 126)
		i++;
	if (i != 4)
		return (0);
	if (map[5] == 0)
		return (0);	
	i++;
	if (map[1] == map[2] || map[1]== map[3] || map[2] == map[3])
		return (0);
	if (check_line(map) == 0 || check_characters(map) == 0)
		return(0);
	while (map[i] != 0)
	{
		j = 0;
		while (map[i] != '\n')
		{
			i++;
			j++;
		}
		if (len(map) != j)
			return (0);
		if (i < map[0] * (len(map) + 1) + 5)
			i++;
	}
	return (1);
}

int		check_line(char *map)
{
	int i;
	int nline;

	i = 0;
	nline = 0;
	while(map[i] != '\0')
	{
	if (map[i] == '\n')
		nline++;
	i++;
	}
	if (nline != map[0])
		return (0);
	return (1);
}

int		len(char *map)
{
	int len;

	len = 5;
	while (map[len] != '\n')
	{
		len++;
	}
	return (len - 5);
}

int		check_characters(char *map)
{
	int i;
	
	i = 0;
	while (map[i] != '\0')
	{
		if (map[i] != map[1] && map[i] != map[2] && map[i] != '\n')
			return (0);
		i++;
	}
	return (1);
}