#include "ft_printf.h"

int ft_printzeros(unsigned int x)
{
    unsigned int n;
    unsigned int i;

    n = 0;
    while(x > 0)
    {
        n++;
        x /= 16;
    }
    i = 8 - n;
    while (i > 0)
    {
        i--;
        ft_putchar('0');
    }
    return(8 - n);
}

int ft_putpointer(unsigned long v)
{
    unsigned int n;
    
    n = 0;
    n += ft_printzeros(v);
    n += ft_puthex_upper(v);
    return (n);
}