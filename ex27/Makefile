#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cpierre <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/14 11:51:41 by cpierre           #+#    #+#              #
#    Updated: 2016/12/14 15:12:23 by cpierre          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME= ft_display_file
GCC=gcc
FLAGS= -Wall -Wextra -Werror
SRC=ft_display_file.c
OBJ=$(SRC:.c=.o)

all: $(NAME)

$(NAME):
		$(GCC) $(SRC) $(FLAGS) -c
		$(GCC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re: fclean all

norm:
		norminette $(SRC)

.PHONY:	all	clean