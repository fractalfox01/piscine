# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/05 11:16:13 by tvandivi          #+#    #+#              #
#    Updated: 2018/11/08 19:16:02 by tvandivi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c 

HEADER := $(wildcard includes/*.h)

NAME = ft_display_name

all: $(NAME)

$(NAME):
	gcc $(SRC) -c $(NAME) -I$(HEADER)

clean:
	/bin/rm -f ./*.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
