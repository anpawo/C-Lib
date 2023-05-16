/*
** EPITECH PROJECT, 2023
** create_str.c
** File description:
** create a str_t (string)
*/

#include "my_vector.h"
#include "my_utils.h"

// maybe create with old.len + 1
void * vec_duplic(void * obj)
{
    vec_t * old = obj;
    vec_t * new = create(VEC, old->size_data, old->len);

    mem_cpy(new->data, old->data, old->len * old->size_data);
    new->len = old->len;

    if (old->size_data == sizeof(char)) {
        new->data[new->len] = '\0';
    }

    return new;
}
