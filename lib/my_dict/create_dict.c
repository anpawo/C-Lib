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
    size_t cap = va_arg(ap, size_t);
    dict_t * dict = alloc_obj(DICT, sizeof(dict_t) + cap * sizeof(list_t *));

    dict->cap = cap;
    mem_set(dict->buck, 0, cap * sizeof(list_t *));

    return dict;
}
