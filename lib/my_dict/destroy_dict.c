/*
** EPITECH PROJECT, 2023
** create_str.c
** File description:
** create a str_t (string)
*/

#include "my_dict.h"
#include "my_utils.h"

void destroy_item(item_t * item)
{
    destroy(&(item->key));
    destroy(&(item->data));
    free(item);
}

void destroy_dict(void * ptr)
{
    dict_t * dict = ptr;

    if (dict == NULL) {
        return;
    }

    for (size_t i = 0; i < dict->len; i++) {
        destroy_item(dict->item[i]);
    }

    free(ptr - sizeof(int));
}
