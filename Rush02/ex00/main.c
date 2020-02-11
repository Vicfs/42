/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vferrare <vferrare@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 13:36:47 by vferrare            #+#    #+#             */
/*   Updated: 2019/10/20 21:58:58 by vferrare           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(int arguments_count, char *arguments_vector[])
{
	int input;

	if (check_for_errors(arguments_count, arguments_vector))
	{
		input = validate_input(arguments_vector[1]);
		folder(arguments_vector[1] + input);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
