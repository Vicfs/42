/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vferrare <vferrares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 21:04:33 by vferrare            #+#    #+#             */
/*   Updated: 2019/10/22 12:41:27 by vferrare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	last_hope(int i, int j, char *file, char *number_file)
{
	while (file[i + j] >= '0' && file[i + j] <= '9')
	{
		number_file[j] = file[i + j];
		j++;
	}
}

void	search_file(char number, int length, char *file, int index)
{
	int		i;
	int		j;
	int		count;
	char	*number_file;

	i = 0;
	count = 0;
	number_file = malloc(999999999 * sizeof(char));
	while (file[i] && count < 40)
	{
		if (i == 0 || file[i] == '\n')
		{
			if (file[i] == '\n')
				count++;
			j = 0;
			if (i != 0)
				i++;
			last_hope(i, j, file, number_file);
			if (number_file[0] == number && ft_strlen(number_file) == length)
				print_string(file + i + j, index);
		}
		i++;
	}
	free(number_file);
}

void	search_file_dec(char number, int index, char *file, char next_number)
{
	int		i;
	int		j;
	int		count;
	char	*number_file;

	i = 0;
	count = 0;
	number_file = malloc(99999999 * sizeof(char));
	while (file[i] && count < 40)
	{
		if (i == 0 || file[i] == '\n')
		{
			if (file[i] == '\n')
				count++;
			j = 0;
			if (i != 0)
				i++;
			last_hope(i, j, file, number_file);
			if (number_file[0] == number && \
			ft_strlen(number_file) == 2 && number_file[1] == next_number)
				print_string(file + i + j, index);
		}
		i++;
	}
	free(number_file);
}

void	dozens(char *input, int length, int index, char *file)
{
	if (input[index] != '1')
	{
		search_file(input[index], 2, file, index);
		if (input[index + 1] != '0')
			search_file(input[index + 1], 1, file, index + 1);
	}
	else
		search_file_dec(input[index], index, file, input[index + 1]);
	if (length > 3 && (input[index - 1] != '0' || \
	input[index] != '0' || input[index + 1] != '0'))
		search_file('1', length - 1, file, index + 1);
}

void	scan_input(char *input, int length, int index, char *file)
{
	if (length % 3 == 0)
	{
		if (input[index] != '0')
		{
			search_file(input[index], 1, file, index);
			search_file('1', 3, file, index + 1);
		}
	}
	else if (length % 3 == 2)
	{
		dozens(input, length, index, file);
		index++;
		length--;
	}
	else if (length % 3 == 1)
	{
		search_file(input[index], 1, file, index);
		if (length > 3 && (input[index - 1] != '0' || \
		input[index] != '0' || input[index - 2] != '0'))
			search_file('1', length, file, index + 1);
	}
	if (length > 1)
		scan_input(input, length - 1, index + 1, file);
	else
		write(1, "\n", 1);
}
