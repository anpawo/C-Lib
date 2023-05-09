/*
** EPITECH PROJECT, 2023
** create_str.c
** File description:
** create a str_t (string)
*/

#include "my_list.h"
#include "my_utils.h"

void * resize_list(void * ptr, size_t len)
{
    list_t * old = * (void **) ptr;
    list_t * new = create(LIST, len);

    mem_cpy(new->data, old->data, old->len * sizeof(void *));
    new->len = old->len;

    free((void *) old - sizeof(int));

    * (void **) ptr = new;
    return new;
}
