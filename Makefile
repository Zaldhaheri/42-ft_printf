# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zaldhahe <zaldhahe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/16 15:21:14 by zaldhahe          #+#    #+#              #
#    Updated: 2024/01/16 15:25:41 by zaldhahe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CCFLAGS = -Wall -Werror -Wextra

SRCS = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_putnbru.c\
	   ft_putpointer.c ft_puthex_upper.c ft_puthex_lower.c ft_isconversion.c\

OBJS = ${SRCS:.c=.o}


all : $(NAME)

$(NAME) : $(OBJS)
	ar -rcs $@ $^

clean :
	rm -f $(OBJS) 

fclean : clean
	rm -f $(NAME)

re : fclean all


.PHONY: all clean fclean re