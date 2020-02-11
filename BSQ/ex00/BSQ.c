/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BSQ.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vferrare <vferrare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 15:30:25 by vferrare          #+#    #+#             */
/*   Updated: 2019/10/23 19:02:27 by vferrare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	BSQ(char *map)
{
	int **tab;

	tab = (int **)malloc(map[0] * sizeof(int[len(map)]));
	tab = integer_table(map, map[0], len(map));
	print_tab(tab, map[0], len(map));
}
