/*
** EPITECH PROJECT, 2023
** create_str.c
** File description:
** create a str_t (string)
*/

#include "my_list.h"
#include "my_utils.h"
#include "stdio.h"

void destroy_list(void * ptr)
{
    list_t * list = ptr;

    if (list == NULL) {
        return;
    }

    for (size_t i = 0; i < list->len; i++) {
        destroy(&(list->data[i]));
    }

    try_free(ptr - sizeof(int));
}
