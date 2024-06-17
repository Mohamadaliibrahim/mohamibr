#include "ft_printf.h"
#include "libft.h"

void hexa(char *str, unsigned int x)
{
    int i;
    int j;
    char hexa_digits[];
    char buffer[9];

    i = 0;
    hexa_digits = "1234567890abcdef";
    if (x == 0)
    {
        str[0] = 0;
        str[1] = '\0';
        return;
    }
    else
    {
        while (x > 0)
        {
            buffer[i++] = hexa_digits[x % 16];
            x /= 16;
        }
        j = i - 1;
        while (j >= 0)
        {
            str[i - 1 - j] = buffer[j];
            j--;
        }
    }
    str[i] = '\0';
}

void HEXA(char *str, unsigned int x)
{
    int i;
    int j;
    char hexa_digits[];
    char buffer[9];

    i = 0;
    hexa_digits = "1234567890ABCDEF";
    if (x == 0)
    {
        str[0] = 0;
        str[1] = '\0';
        return;
    }
    else
    {
        while (x > 0)
        {
            buffer[i++] = hexa_digits[x % 16];
            x /= 16;
        }
        j = i - 1;
        while (j >= 0)
        {
            str[i - 1 - j] = buffer[j];
            j--;
        }
    }
    str[i] = '\0';
}

void check_arg1(va_list ap, char str)
{
    if (str == 'i' || str == 'd')
        ft_putnbr_fd(va_arg(ap, int), 1);
    else if (str == 'u')
        ft_putnbr_fd(va_arg(ap, unsigned int), 1);
    else if (str == 'x')
    {
        char buffer[9];
        hexa(buffer, va_arg(ap, unsigned long));
        ft_putstr_fd(buffer, 1);
    }
    else if (str == 'X')
    {
        char buffer[9];
        HEXA(buffer, va_arg(ap, unsigned long));
        ft_putstr_fd(buffer, 1);
    }
}

void check_arg(char *str,va_list ap)
{
    while (*str)
    {
        if (*str == '%' && *(++str) && *(str) != '%')
        {
            if (*str == 'c')
            {
                ft_putchar_fd(va_arg(ap, int), 1);
            }
            else if (*str == 's')
            {
                ft_putstr_fd(va_arg(ap, char *), 1);
            }
            else
            check_arg1(ap, *str);
        }
        else
        {
            ft_putchar_fd(*str, 1);
        }
        str++;
    }
}