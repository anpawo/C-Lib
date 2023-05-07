/*
** EPITECH PROJECT, 2023
** main.c
** File description:
** mylib
*/

#include "project.h"

// int * ptr = &(str->size_data);
// int type = ((int *)(ptr - 1))[0];


// int get_ptr()

int main(void)
{
    AUTO_FREE str_t * str = create(STR, "je mar?");

    printf(":%s:\n", str->data);
    insert(&str, "suis ", 3);
    printf(":%s:\n", str->data);


    return SUCCESS;
}

/* try to modify a string only using .add */