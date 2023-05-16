/*
** EPITECH PROJECT, 2023
** create_str.c
** File description:
** create a str_t (string)
*/

#include "my_vector.h"
#include "my_utils.h"

void * resize_vec(void ** ptr, size_t len)
{
    vec_t * old = * ptr;
    vec_t * new = create(VEC, old->size_data, len);

    mem_cpy(new->data, old->data, old->len * old->size_data);
    new->len = old->len;

    destroy_vec(old);
    * ptr = new;
    return new;
}
