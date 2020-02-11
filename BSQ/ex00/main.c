/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vferrare <vferrare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 14:21:34 by vferrare          #+#    #+#             */
/*   Updated: 2019/10/23 15:31:32 by vferrare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int main(int argc, char *argv[])
{
	int i;
	int folder;
	int useless;
	char *map;

	i = 1;
	while (i < argc)
	{
		map = malloc(10000);
		folder = open(argv[i], O_RDONLY);
		if (folder != -1)
			{
				useless = read(folder, map, 10000);
				if (check_errors(map))
					BSQ(map);
			}
		free(map);
		close(folder);
		i++;
	}
	return (0);
}