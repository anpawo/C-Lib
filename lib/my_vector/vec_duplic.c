/*
** EPITECH PROJECT, 2023
** create_str.c
** File description:
** create a str_t (string)
*/

#include "my_vector.h"
#include "my_utils.h"

// maybe create with old.len + 1
void * vec_duplic(vec_t * vec)
{
    vec_t * new = create(VEC, vec->size_data, vec->cap);

    mem_cpy(new->data, vec->data, vec->len * vec->size_data);
    new->len = vec->len;

    if (vec->size_data == sizeof(char)) {
        new->data[new->len] = '\0';
    }

    return new;
}
