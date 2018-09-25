# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmakwakw <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/20 13:54:24 by lmakwakw          #+#    #+#              #
#    Updated: 2018/08/22 14:51:41 by lmakwakw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	fdf

LIB_FA = ./libft/libft.a

LIB_G = -lm -L libft/

CC =	gcc

FLAGS = -Wall -Werror -Wextra

LINK =	-lmlx -framework OpenGL -framework AppKit

HEADER = libft/libft.h

SRC	=	main.c \
		read_map.c \
		line_draw.c \
		key_work.c \
		projection.c \
		scale.c \
		calculate_draw.c \
		error_handle.c \
		
OBJ	=	main.o \
		read_map.o \
		line_draw.o \
		key_work.o \
		projection.o \
		scale.o \
		calculate_draw.o \
		error_handle.o \

all: $(NAME)

$(NAME): $(OBJ)
	@make -C libft
	@$(CC) $(FLAGS) -c $(SRC)
	$(CC) -o $(NAME) $(OBJ) $(LIB_FA) $(LIB_G) $(LINK)

clean:
	@make -C libft/ clean
	rm -f $(OBJ)

fclean: clean
	@make -C libft/ fclean
	rm -f $(NAME)

re: fclean all
