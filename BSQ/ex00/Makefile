# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vferrare <vferrare@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/22 18:00:09 by vferrare          #+#    #+#              #
#    Updated: 2019/10/23 21:02:01 by vferrare         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = *.c

NAME = bsq.exe

libed: *.o

compile:
	cc -Wall -Wextra -Werror -c $(SRC)
	cc -Wall -Wextra -Werror -o $(NAME) *.o

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)
	
re: fclean all