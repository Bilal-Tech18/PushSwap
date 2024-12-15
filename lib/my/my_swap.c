/*
** EPITECH PROJECT, 2021
** my_swap
** File description:
** swap_to_int
*/

#include <unistd.h>

void my_swap(int *a, int *b)
{
    int test;
    test = *a;
    *a = *b;
    *b = test;
}
