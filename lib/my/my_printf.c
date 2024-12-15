/*
** EPITECH PROJECT, 2021
** my_printf.c
** File description:
** printf
*/

#include <assert.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int my_strlen(char const *str);
int my_put_nbr_base(int nbr, char *base);
int my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_put_nbr_uns(unsigned nb);
int my_put_nbr_long(long nb);

int flags(char *str, int i, va_list argument)
{
    if (str[i] == '%' && str[i + 1] == 's') {
        my_putstr(va_arg(argument, char *));
        i = i + 2;
    }
    if (str[i] == '%' && str[i + 1] == 'd' || str[i + 1] == 'i') {
        my_put_nbr(va_arg(argument, int));
        i = i + 2;
    }
    if (str[i] == '%' && str[i + 1] == 'c') {
        my_putchar(va_arg(argument, int));
        i = i + 2;
    }
    if (str[i] == '%' && str[i + 1] == '%') {
        my_putchar('%');
        i = i + 2;
    }
    return (i);
}

int flags_2(char *str, int i, va_list argument)
{
    unsigned nb;

    if (str[i] == '%' && str[i + 1] == 'X') {
        my_put_nbr_base(nb = va_arg(argument, int), "0123456789ABCDEF");
        i = i + 2;
    }
    if (str[i] == '%' && str[i + 1] == 'o') {
        my_put_nbr_base(nb = va_arg(argument, int), "01234567");
        i = i + 2;
    }
    if (str[i] == '%' && str[i + 1] == 'x') {
        my_put_nbr_base(nb = va_arg(argument, int), "0123456789abcdef");
        i = i + 2;
    }
    if (str[i] == '%' && str[i + 1] == 'b') {
        my_put_nbr_base(nb = va_arg(argument, int), "01");
        i = i + 2;
    }
    return (i);
}

int flags_3(char *str, int i, va_list argument)
{
    unsigned nb;

    if (str[i] == '%' && str[i + 1] == 'l' && str[i + 2] == 'd' ||
    str[i + 2] == 'i') {
        my_put_nbr_long(va_arg(argument, long));
        i = i + 3;
    }
    if (str[i] == '%' && str[i + 1] == 'u') {
        my_put_nbr_uns(va_arg(argument, unsigned));
        i = i + 2;
    }
    if (str[i] == '%' && str[i + 1] == 'p') {
        my_putstr("0x");
        my_put_nbr_base(nb = va_arg(argument, int), "0123456789abcdef");
        i = i + 2;
    }
    return (i);
}

int my_printf(char *str, ...)
{
    int i = 0;
    int k = 0;
    va_list argument;

    va_start(argument, str);
    while (str[i] != '\0') {
        k = i;
        i = flags(str, i, argument);
        i = flags_2(str, i, argument);
        i = flags_3(str, i, argument);
        if (str[i] == '\0')
            return 0;
        if (str[i] == '%' && k != i)
            i--;
        else
            my_putchar(str[i]);
        i++;
    }
    va_end(argument);
}
