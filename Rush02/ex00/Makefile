# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gkenzo-s <gkenzo-s@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/20 20:44:02 by gkenzo-s          #+#    #+#              #
#    Updated: 2019/10/23 11:58:04 by gkenzo-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = *.c

NAME = rush-02

all:
	cc -Wall -Wextra -Werror -c $(SRC)
	cc -Wall -Wextra -Werror -o $(NAME) *.o

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)
	
re: fclean all
