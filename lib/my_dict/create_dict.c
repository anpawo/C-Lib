/*
** EPITECH PROJECT, 2023
** create_str.c
** File description:
** create a str_t (string)
*/

#include "my_dict.h"
#include "my_utils.h"

void * create_dict(va_list ap)
{
    size_t len = va_arg(ap, size_t);
    size_t cap = pad_len(len);
    dict_t * dict = alloc_obj(DICT, sizeof(dict_t) + cap * sizeof(void *));

    dict->len = 0;
    dict->cap = cap;

    return dict;
}

item_t * create_item(char * key, void * data)
{
    item_t * item = malloc(sizeof(item_t));

    item->key = STR(key);
    item->data = data;

    return item;
}
