# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lscheupl <lscheupl@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/23 15:34:23 by lscheupl          #+#    #+#              #
#    Updated: 2025/04/23 18:27:18 by lscheupl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = cub3D

CC = cc -Wall -Wextra -Werror -g3

SRC = src/main.c

OBJ = $(SRC:.c=.o)

OBJ_DIR = ./obj

all: $(NAME)

$(NAME): $(OBJ)
	make -C ./Libft2
	$(CC) -o $(NAME) $(OBJ) Libft2/libft.a

clean:
	make -C Libft2/ fclean
	rm $(OBJ)

fclean: clean
	rm -f $(NAME)
	
re: fclean all


.PHONY: all clean fclean re