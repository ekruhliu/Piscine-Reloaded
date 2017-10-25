# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/25 15:40:56 by ekruhliu          #+#    #+#              #
#    Updated: 2017/10/25 15:40:57 by ekruhliu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
HEADER = include/
FLAG = -c -Wall -Wextra -Werror
HDR = -I $(HEADER)
SRC = main.c srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_read.c
OBJ = main.o ft_putchar.o ft_putstr.o ft_read.o

all: $(NAME)

$(NAME):
		@ gcc $(FLAG) $(SRC) $(HDR)
		@ gcc $(OBJ) -o $(NAME)
		@ /bin/rm -f $(OBJ)

clean:
		@ /bin/rm -f $(OBJ)
fclean: clean
		@ /bin/rm -f $(NAME)

re: fclean all
