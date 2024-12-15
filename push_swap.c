/*
** EPITECH PROJECT, 2021
** push_swap.c
** File description:
** push_swap
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include "include/my.h"
#include "include/push_swap.h"

int second_function(list_all_t *stock_s, int z)
{
    int a = 0;

    while (a < stock_s->size_a) {
        if ((stock_s->list_a[0] & (1 << z)) == 0) {
            put_in_b(stock_s);
            stock_s->size_a--;
            stock_s->size_b++;
        } else {
            rotate_a(stock_s);
            a++;
        }
    }
    a = 0;
}

void radix_sort(list_all_t *stock_s, int size)
{
    stock_s->list_b = malloc(sizeof(int) * size + 1);
    stock_s->size_a = size;
    stock_s->size_b = 0;
    int stock = 0;
    int neg = 0;

    for (int i = 0; i < size; i++){
        if (stock_s->list_a[i] < 0)
            neg++;
    }
    my_putstr("ra rra");
    for (int z = 0; z < 32; z++) {
        second_function(stock_s, z);
        stock = stock_s->size_b;
        for (int i = 0; i < stock_s->size_b; i++) {
            put_in_a(stock_s);
            stock_s->size_a++;
            stock--;
        }
        stock_s->size_b = stock;
    }
    for (; neg != 0; neg--)
        my_putstr(" rra");
}

int main(int argc, char **argv)
{
    list_all_t stock_s;
    int i = 0;
    int size = argc - 1;
    bool is_sort = true;
    stock_s.list_a = malloc(sizeof(int) * (argc + 1));

    if (argc < 3) {
        my_putchar('\n');
        return (0);
    }
    while (i < size) {
        stock_s.list_a[i] = my_getnbr(argv[i + 1]);
        if (stock_s.list_a[i] < stock_s.list_a[i - 1] && i > 0)
            is_sort = false;
        i++;
    }
    if (is_sort == false)
        radix_sort(&stock_s, size);
    my_putchar('\n');
    return (0);
}
