/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vferrare <vferrare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 13:52:41 by vferrare          #+#    #+#             */
/*   Updated: 2019/10/23 18:09:12 by vferrare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

int		check_errors(char *map);
void	BSQ(char *map);
int		len(char *map);
int		**integer_table(char *map, int line, int column);
int		check_characters(char *map);
int		check_line(char *map);
void	print_tab(int **tab, int linha, int coluna);

#endif