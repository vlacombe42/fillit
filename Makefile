# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vlacombe <vlacombe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/15 15:15:48 by vlacombe          #+#    #+#              #
#    Updated: 2021/01/25 16:27:15 by vlacombe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC_PATH = ft_check.c \
	ft_data.c \
	main.c \
	position.c \
	resolve.c \
	map.c

OBJ = ft_check.o \
	ft_data.o \
	main.o \
	position.o \
	resolve.o \
	map.o

INC_PATH = .

CC = gcc
CFLAGS = -Wall -Wextra -Werror

LIBFT = -I libft/ -L ./libft -lft

all : $(NAME)

$(NAME): 
	make -C libft/ fclean && make -C libft/
	$(CC) -o fillit $(CFLAGS) -I$(INC_PATH) $(SRC_PATH) $(LIBFT)

clean :
	make clean -C libft
	/bin/rm -f $(OBJ)
fclean : clean
	make fclean -C libft
	rm -f $(NAME)
re : fclean all
