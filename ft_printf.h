# ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>

int ft_isconversion(char c);
int ft_putchar(char c);
int ft_putstr(char *s);
int ft_putnbr(int x);
int ft_puthex_upper(unsigned int x);
int ft_puthex_lower(unsigned int x);
int ft_printf(const char *s, ...);

#endif