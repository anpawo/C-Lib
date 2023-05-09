/*
** EPITECH PROJECT, 2023
** create_str.c
** File description:
** create a str_t (string)
*/

#include "my_list.h"
#include "my_utils.h"

static void * insert_at_end(void * ptr, ...)
{
    list_t * list = NULL;
    va_list ap;

    va_start(ap, ptr);
    list = list_insert(ptr, ap);
    va_end(ap);

    return list;
}

void * list_append(void * ptr, va_list ap)
{
    list_t * list = * (void **) ptr;
    size_t index = list->len;
    void * data = va_arg(ap, void *);

    return insert_at_end(ptr, index, data);
}
