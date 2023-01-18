# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yahamdan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/05 01:07:25 by yahamdan          #+#    #+#              #
#    Updated: 2022/11/09 11:14:41 by yahamdan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_putchar_pf.c \
	ft_putstr_pf.c \
	ft_strlen_pf.c \
	ft_putnbr_pf.c \
	ft_putnbru_pf.c \
	ft_putpx_pf.c \
	ft_printf.c 

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(OBJ) $(NAME)

re : fclean all