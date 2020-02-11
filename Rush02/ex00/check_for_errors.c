/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_for_errors.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vferrare <vferrare@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 13:36:20 by vferrare            #+#    #+#             */
/*   Updated: 2019/10/20 23:21:12 by vferrare           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		validate_input(char *arguments_vector)
{
	int i;

	i = 0;
	while (arguments_vector[i] == '0')
		i++;
	if (arguments_vector[i] == '\0')
		return (i - 1);
	return (i);
}

int		check_for_errors(int arguments_count, char *arguments_vector[])
{
	int i;

	i = 0;
	if (arguments_count != 2)
		return (0);
	else
		while (arguments_vector[1][i])
		{
			if (arguments_vector[1][i] < '0' || arguments_vector[1][i] > '9')
				return (0);
			i++;
		}
	if (i > 39)
		return (0);
	return (1);
}
