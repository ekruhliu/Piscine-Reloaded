# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/24 20:18:41 by ekruhliu          #+#    #+#              #
#    Updated: 2017/10/24 20:18:42 by ekruhliu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADER = includes/
FLAG = -Wall -Wextra -Werror
OPTIONS = -c -I $(HEADER)
SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(NAME)

$(NAME):
		@ gcc $(FLAG) $(OPTIONS) $(SRC)
		@ ar rc $(NAME) $(OBJ)

clean:
		@ /bin/rm -f $(OBJ)
fclean: clean
		@ /bin/rm -f $(NAME)

re: fclean all
