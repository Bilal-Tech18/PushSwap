/*
** EPITECH PROJECT, 2021
** function_used.c
** File description:
** function_for_algo
*/

#include <stdlib.h>
#include <unistd.h>
#include "../include/my.h"
#include "../include/push_swap.h"

void put_in_a(list_all_t *stock_s)
{
    int stock = stock_s->list_b[0];

    for (int i = stock_s->size_a; i > 0; i--) {
        stock_s->list_a[i] = stock_s->list_a[i - 1];
    }
    stock_s->list_a[0] = stock;
    for (int i = 0; i < stock_s->size_b; i++)
        stock_s->list_b[i] = stock_s->list_b[i + 1];
    write(1, " pa", 3);
}

void put_in_b(list_all_t *stock_s)
{
    int stock = stock_s->list_a[0];

    for (int i = stock_s->size_b; i > 0; i--) {
        stock_s->list_b[i] = stock_s->list_b[i - 1];
    }
    stock_s->list_b[0] = stock;
    for (int i = 0; i < stock_s->size_a; i++)
        stock_s->list_a[i] = stock_s->list_a[i + 1];
    write(1, " pb", 3);
}

void rotate_a(list_all_t *stock_s)
{
    int stock = stock_s->list_a[0];

    for (int i = 0; i < stock_s->size_a - 1; i++) {
        stock_s->list_a[i] = stock_s->list_a[i + 1];
    }
    stock_s->list_a[stock_s->size_a - 1] = stock;
    write(1, " ra", 3);
}
