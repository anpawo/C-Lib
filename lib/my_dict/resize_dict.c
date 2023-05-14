/*
** EPITECH PROJECT, 2023
** create_str.c
** File description:
** create a str_t (string)
*/

#include "my_dict.h"
#include "my_utils.h"

void * resize_dict(void * ptr, size_t len)
{
    dict_t * old = * (void **) ptr;
    dict_t * new = create(DICT, len);

    mem_cpy(new->item, old->item, old->len * sizeof(item_t *));
    new->len = old->len;

    free((void *) old - sizeof(int));

    * (void **) ptr = new;
    return new;
}
