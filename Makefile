# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dteruya <dteruya@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/18 08:46:43 by dteruya           #+#    #+#              #
#    Updated: 2024/11/21 17:19:05 by dteruya          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c\
	ft_putnbr.c\
	ft_putchar.c\
	ft_putstr.c\
	ft_strchr.c\
	ft_putunbr.c\
	ft_puthex.c\
	ft_puthexl.c\
	ft_puthexu.c\

DESP = ft_printf.h

OBJ = $(SRC:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c $(DESP)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

re: fclean all

.PHONY: all clean fclean re