# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hlefevre <hlefevre@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/22 21:05:28 by hlefevre          #+#    #+#              #
#    Updated: 2024/03/22 21:24:44 by hlefevre         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush01

FILES =	./src/ft_atoi.c \
		./src/ft_putchar.c \
		./src/ft_putstr.c \
		./src/rush01.c \
		./src/checks.c \

OBJ = ${FILES:.c=.o}

FLAGS = -Wextra -Wall -Werror

all:	${NAME}

${NAME}: ${OBJ}
		gcc $(OBJ) $(FLAGS) -o $(NAME)

%o:	%.c
	gcc $(FLAGS) $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f *.out

re: fclean all

.PHONY: all clean fclean re