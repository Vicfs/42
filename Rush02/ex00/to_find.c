/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_find.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vferrare <vferrare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 14:34:50 by vferrare            #+#    #+#           */
/*   Updated: 2019/10/22 16:21:01 by vferrare            ###   ########.fr    */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	folder(char *argument_vector)
{
	int		folder;
	int		ret;
	char	*file;
	int		length;
	int		first;

	file = malloc(1000000000 * sizeof(char));
	first = 1;
	folder = open("numbers.dict", O_RDONLY);
	if (folder != -1)
	{
		length = ft_strlen(argument_vector);
		ret = read(folder, file, 1000000000);
		scan_input(argument_vector, length, 0, file);
	}
	free(file);
	close(folder);
}
