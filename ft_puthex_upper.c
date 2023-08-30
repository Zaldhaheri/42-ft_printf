#include "ft_printf.h"

void ft_printhex_upper(unsigned int x)
{
    if (x > 15)
        ft_printhex_upper(x / 16);
    write (1, &"0123456789ABCDEF"[x%16], 1);
}

int ft_puthex_upper(unsigned int x)
{
    int n;

    n = 0;
    ft_printhex_upper(x);
    while (x > 0)
    {
        x /= 16;
        n++;
    }
    return (n);
}