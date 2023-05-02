/*
** EPITECH PROJECT, 2023
** create_str.c
** File description:
** create a str_t (string)
*/

#include "my_object.h"
#include "my_utils.h"

str_t * create_str(va_list ap)
{
    size_t len = len ? len : str_len(init);
    size_t cap = pad_len(len + 1);
    str_t * str = alloc_obj(STR, sizeof(str_t) + cap * sizeof(char));

    return NULL;
}
