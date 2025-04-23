# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lscheupl <lscheupl@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/23 17:18:51 by lscheupl          #+#    #+#              #
#    Updated: 2025/04/23 18:21:18 by lscheupl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCES_LIBFT = src/ft_atoi.c
SOURCES_LIBFT += src/ft_bzero.c
SOURCES_LIBFT += src/ft_calloc.c
SOURCES_LIBFT += src/ft_isalnum.c
SOURCES_LIBFT += src/ft_isalpha.c
SOURCES_LIBFT += src/ft_isascii.c
SOURCES_LIBFT += src/ft_isdigit.c
SOURCES_LIBFT += src/ft_isprint.c
SOURCES_LIBFT += src/ft_itoa.c
SOURCES_LIBFT += src/ft_memchr.c
SOURCES_LIBFT += src/ft_memcmp.c
SOURCES_LIBFT += src/ft_memcpy.c
SOURCES_LIBFT += src/ft_memmove.c
SOURCES_LIBFT += src/ft_memset.c
SOURCES_LIBFT += src/ft_putchar_fd.c
SOURCES_LIBFT += src/ft_putendl_fd.c
SOURCES_LIBFT += src/ft_putnbr_fd.c
SOURCES_LIBFT += src/ft_putstr_fd.c
SOURCES_LIBFT += src/ft_split.c
SOURCES_LIBFT += src/ft_strchr.c
SOURCES_LIBFT += src/ft_strdup.c
SOURCES_LIBFT += src/ft_striteri.c
SOURCES_LIBFT += src/ft_strjoin.c
SOURCES_LIBFT += src/ft_strlcat.c
SOURCES_LIBFT += src/ft_strlcpy.c
SOURCES_LIBFT += src/ft_strlen.c
SOURCES_LIBFT += src/ft_strmapi.c
SOURCES_LIBFT += src/ft_strncmp.c
SOURCES_LIBFT += src/ft_strnstr.c
SOURCES_LIBFT += src/ft_strrchr.c
SOURCES_LIBFT += src/ft_strtrim.c
SOURCES_LIBFT += src/ft_substr.c
SOURCES_LIBFT += src/ft_tolower.c
SOURCES_LIBFT += src/ft_toupper.c
SOURCES_LIBFT += src/ft_printf.c
SOURCES_LIBFT += src/ft_printf_dependancy.c
SOURCES_LIBFT += src/ft_putnbr_base_fd.c
SOURCES_LIBFT += src/ft_lstadd_back.c
SOURCES_LIBFT += src/ft_lstadd_front.c
SOURCES_LIBFT += src/ft_lstclear.c
SOURCES_LIBFT += src/ft_lstdelone.c
SOURCES_LIBFT += src/ft_lstiter.c
SOURCES_LIBFT += src/ft_lstlast.c
SOURCES_LIBFT += src/ft_lstmap.c
SOURCES_LIBFT += src/ft_lstnew.c
SOURCES_LIBFT += src/ft_lstsize.c
SOURCES_LIBFT += src/ft_count_words.c
SOURCES_LIBFT += src/ft_atoll.c
SOURCES_LIBFT += src/ft_strcat.c
SOURCES_LIBFT += src/ft_strcpy.c
SOURCES_LIBFT += src/ft_free_tab.c
SOURCES_LIBFT += src/ft_pileadd_back.c
SOURCES_LIBFT += src/ft_pileadd_front.c
SOURCES_LIBFT += src/ft_pileclear.c
SOURCES_LIBFT += src/ft_piledelone.c
SOURCES_LIBFT += src/ft_pileiter.c
SOURCES_LIBFT += src/ft_pilelast.c
SOURCES_LIBFT += src/ft_pilemap.c
SOURCES_LIBFT += src/ft_pilenew.c
SOURCES_LIBFT += src/ft_pilesize.c
SOURCES_LIBFT += src/ft_pilefirst.c
SOURCES_LIBFT += Get_Next_Line/get_next_line.c
SOURCES_LIBFT += Get_Next_Line/get_next_line_utils.c

CC = cc -Wall -Werror -Wall

OBJ = $(SOURCES_LIBFT:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean: 
	rm $(OBJ)

fclean: clean
	rm $(NAME)
	
re: fclean all


.PHONY: all clean fclean re