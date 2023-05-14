/*
** EPITECH PROJECT, 2023
** create_str.c
** File description:
** create a str_t (string)
*/

#include "my_list.h"
#include "my_utils.h"

void * list_update(void * ptr, va_list ap)
{
    list_t * list = ptr;
    size_t index = va_arg(ap, size_t);
    void * data = va_arg(ap, void *);

    if (index >= list->len) {
        index = list->len - 1;
    }

    destroy(&(list->data[index]));

    list->data[index] = data;

    return list;
}
