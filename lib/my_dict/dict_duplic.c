/*
** EPITECH PROJECT, 2023
** create_str.c
** File description:
** create a str_t (string)
*/

#include "my_dict.h"
#include "my_utils.h"

void * dict_duplic(void * obj)
{
    dict_t * old = obj;
    dict_t * new = create(DICT, old->cap);

    for (size_t i = 0; i < old->cap; i++) {
        if (old->buck[i] == NULL) {
            continue;
        }
        new->buck[i] = dup_obj(old->buck[i]);
    }

    return new;
}
