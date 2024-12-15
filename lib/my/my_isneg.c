/*
** EPITECH PROJECT, 2021
** my_isneg
** File description:
** ??
*/

#include <unistd.h>

int my_putchar(char c)
{
    write(1, &c, 1);
}

int my_isneg(int n);

int my_isneg(int n)
{
    if ( n < 0 ) {
        my_putchar('N');
    } else {
        my_putchar('P');
        my_putchar('\n');
    }
}
