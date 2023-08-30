#include "ft_printf.h"

void ft_printhex_lower(unsigned int x)
{
    if (x > 15)
        ft_printhex_lower(x / 16);
    write (1, &"0123456789abcdef"[x%16], 1);
}

int ft_puthex_lower(unsigned int x)
{
    int n;

    n = 0;
    ft_printhex_lower(x);
    while (x > 0)
    {
        x /= 16;
        n++;
    }
    return (n);
}