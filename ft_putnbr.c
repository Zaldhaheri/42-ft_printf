#include "ft_printf.h"

void ft_printnum(int x)
{
    if (x == -2147483648)
        ft_putstr("-2147483648");
    if (x < 0)
    {
        ft_putchar('-');
        x = -x;
    }
    if (x > 9)
        ft_printnum(x / 10);
    write(1, &"0123456789"[x % 10], 1);
}

int ft_putnbr(int x)
{
    int n;

    n = 0;
    ft_printnum(x);
    if (x == -2147483648)
        return (11);
    else if (x < 0)
    {
        x = -x;
        n++;
    }
    while (x)
    {
        x /= 10;
        n++;
    }
    return (n);
}
