/*
** EPITECH PROJECT, 2023
** create_str.c
** File description:
** create a str_t (string)
*/

#include "my_list.h"
#include "my_utils.h"

// maybe create with old.len + 1
void * list_duplic(void * obj)
{
    list_t * old = obj;
    list_t * new = create(LIST, old->len);

    for (size_t i = 0; i < old->len; i++) {
        new->data[i] = dup_obj(old->data[i]);
    }
    new->len = old->len;

    return new;
}
