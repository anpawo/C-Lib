/*
** EPITECH PROJECT, 2023
** main.c
** File description:
** mylib
*/

#include "project.h"

static void print_vec(int_t * vec)
{
    for (size_t i = 0; i < vec->len; i++) {
        printf("%d", vec->data[i]);
    }
    printf("\n");
}

int main(void)
{
    AUTO_FREE int_t * vec = VEC(sizeof(int), 3);

    for (int i = 0; i < 3; i++) {
        insert(&vec, 0, &i);
        append(&vec, &i);
    }
    print_vec(vec);
    size_t n[] = {18};
    update(&vec, 2, n);
    print_vec(vec);
    return SUCCESS;
}

// output:
// je suis marius !