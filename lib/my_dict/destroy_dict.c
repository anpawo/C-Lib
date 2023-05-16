/*
** EPITECH PROJECT, 2023
** create_str.c
** File description:
** create a str_t (string)
*/

#include "my_dict.h"
#include "my_utils.h"

void destroy_dict(dict_t * dict)
{
    if (dict == NULL) {
        return;
    }

    for (size_t i = 0; i < dict->cap; i++) {
        destroy(dict->buck[i]);
    }

    free((int *) dict - 1);
}
