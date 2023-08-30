#include "ft_printf.h"

int ft_argconv(va_list *args, char c)
{
    int n;

    n = 0;
    if (c == 'c')
        n += ft_putchar(va_arg(*args, int));
    else if (c == 's')
        n += ft_putstr(va_arg(*args, char *));
    else if (c == 'p')
        n += 1;
    else if (c == 'd')
        n += ft_putnbr(va_arg(*args, int));
    else if (c == 'i')
        n += ft_putnbr(va_arg(*args, int));
    else if (c == 'u')
        return (1);
    else if (c == 'x')
        n += ft_puthex_lower(va_arg(*args, unsigned int));
    else if (c == 'X')
        n += ft_puthex_upper(va_arg(*args, unsigned int));
    else if (c == '%')
        n += ft_putchar('%');
    return n;
}

int ft_printf(const char *s, ...)
{
    int i;
    int n;
    va_list args;

    i = 0;
    n = 0;
    va_start(args, s);
    while(s[i])
    {
        if (s[i] == '%')
            n += ft_argconv(&args, s[++i]);
        else
            n += ft_putchar(s[i]);
        i++;
    }
    va_end(args);
    return (n);
}

int main()
{
    printf("%d\n%d", printf("hello %X %x\n", 10, 10), ft_printf("hello %X %x\n", 10, 10));
}