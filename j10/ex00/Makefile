# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amarec <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/20 17:45:41 by amarec            #+#    #+#              #
#    Updated: 2017/08/20 17:45:42 by amarec           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = srcs/ft_putchar.c srcs/ft_strlen.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_swap.c
HEADER = includes/*.h

all: compil

compil:
	gcc -c $(SRC) -I $(HEADER)
	ar rc libft.a *.o
	rm -rf *.o

clean:
	rm -rf *.o

fclean: clean
	rm -rf *.a

re: fclean all
