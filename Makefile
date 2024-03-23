# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hlefevre <hlefevre@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/22 21:05:28 by hlefevre          #+#    #+#              #
#    Updated: 2024/03/23 20:34:26 by hlefevre         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush01

FILES =	./src/ft_atoi.c \
		./src/ft_putchar.c \
		./src/ft_putstr.c \
		./src/rush01.c \
		./src/checks.c \
		./src/ft_split.c \
		./src/ft_strlen.c \
		./src/init_bord.c \
		./src/xavier_niel.c \
		./src/errors.c \
		./src/game_checks.c \
		./src/print_numbers4.c \
		./src/print_number1.c \
		./src/print_matrix.c \
		./src/backtracktest.c \

OBJ = ${FILES:.c=.o}

FLAGS = -Wextra -Wall -Werror -fsanitize=address

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