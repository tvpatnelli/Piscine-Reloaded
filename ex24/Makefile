# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vpatnell <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/08 15:23:24 by vpatnell          #+#    #+#              #
#    Updated: 2018/11/22 14:49:01 by vpatnell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ./srcs/ft_putchar.c \
	  ./srcs/ft_putstr.c \
	  ./srcs/ft_strcmp.c \
	  ./srcs/ft_strlen.c \
	  ./srcs/ft_swap.c

SRO = ft_putchar.o \
	  ft_putstr.o \
	  ft_strcmp.o \
	  ft_strlen.o \
	  ft_swap.o 

CC = CC 

CFLAGS = -Wall -Wextra -Werror 

HEADER = /includes/ -I

all : $(NAME)

$(NAME):  
	gcc -c $(SRC)
	ar rc libft.a $(SRO)
	ranlib libft.a

clean :
	rm -f *.o 

fclean : clean 
	rm -f $(NAME)

re : fclean all
