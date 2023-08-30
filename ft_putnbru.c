#include "ft_printf.h"

void ft_printnumu(unsigned int x)
{
    if (x > 9)
        ft_printnumu(x / 10);
    write(1, &"0123456789"[x % 10], 1);
}

int ft_putnbru(unsigned int x)
{
    int n;

    n = 0;
    ft_printnumu(x);
    while (x)
    {
        x /= 10;
        n++;
    }
    return (n);
}