/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_to_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vferrare <vferrare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 15:32:05 by vferrare          #+#    #+#             */
/*   Updated: 2019/10/23 17:30:25 by vferrare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int		**integer_table(char *map, int line, int column)
{
	int **tab;
	int i;

	tab = (int **)malloc(line * sizeof(int[column]));
	i = 0;
	while (i < len(map))
	{
		if (map[i + 5] == map[1])
			tab[0][i] = 1;
		else
			tab[0][i] = 0;
		i++;
	}
	i = 0;
	while (i < map[0])
	{
		if (map[(i * column) + 5] == map[1])
			tab[i][0] = 1;
		else
			tab[i][0] = 0;
	}
	free (tab);
	return (tab);
}