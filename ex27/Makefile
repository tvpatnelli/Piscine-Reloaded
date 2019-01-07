# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vpatnell <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/22 13:39:35 by vpatnell          #+#    #+#              #
#    Updated: 2018/11/22 17:51:01 by vpatnell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = ft_display_file.c 

FLAGS = -Wextra -Wall -Werror

all : $(NAME)

$(NAME) : 
	gcc $(FLAGS)  $(SRC) -o $(NAME)

clean : 
	rm -f *.o

fclean : clean
	rm -f $(NAME)

re : fclean
	$(NAME)
