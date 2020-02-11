/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tneves <tneves@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 13:42:53 by tneves            #+#    #+#             */
/*   Updated: 2019/10/20 23:27:13 by tneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

void	print_string(char *linha, int index);
int		ft_strlen(char *str);
void	scan_input(char *input, int length, int index, char *file);
void	search_file_dec(char number, int index, char *file, char next_number);
void	search_file(char number, int length, char *file, int index);
int		validate_input(char *arguments_vector);
int		check_for_errors(int arguments_count, char *arguments_vector[]);
void	folder(char *argument_vector);
void	last_hope(int i, int j, char *file, char *number_file);

#endif
