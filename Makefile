NAME = libftprintf.a

CC = gcc
CCFLAGS = -Wall -Werror -Wextra
RM = cmd /C del

SRCS = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_putnbru.c\
	   ft_putpointer.c ft_puthex_upper.c ft_puthex_lower.c ft_isconversion.c\

OBJS = ${SRCS:.c=.o}

all : $(NAME)

$(NAME) : $(OBJS)
	ar -rcs $(NAME) $(OBJS)
run :
	$(CC) $(SRCS)
	.\a.exe

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean all