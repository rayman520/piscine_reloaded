#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cpierre <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/14 11:51:41 by cpierre           #+#    #+#              #
#    Updated: 2016/12/14 17:08:38 by cpierre          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

SRC =		srcs/ft_putchar.c\
			srcs/ft_putstr.c\
			srcs/ft_strcmp.c\
			srcs/ft_strlen.c\
			srcs/ft_swap.c

HDR_PATH= ./includes 

OBJ = 		ft_putchar.o\
			ft_putstr.o\
			ft_strcmp.o\
			ft_strlen.o\
			ft_swap.o

all: $(NAME)

$(OBJ):
		gcc $(FLAGS) -c $(SRC) -I$(HDR_PATH)

%.o:%.c
		gcc $(FLAGS) $< -o $@

$(NAME): $(OBJ)
		ar rcs $(NAME) $(OBJ)

clean:
		/bin/rm -f $(OBJ)

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all