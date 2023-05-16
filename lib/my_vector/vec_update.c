/*
** EPITECH PROJECT, 2023
** create_str.c
** File description:
** create a str_t (string)
*/

#include "my_vector.h"
#include "my_utils.h"

void * vec_update(void * ptr, va_list ap)
{
    vec_t * vec = ptr;
    size_t index = va_arg(ap, size_t);
    void * data = va_arg(ap, void *);

    if (index >= vec->len) {
        index = vec->len - 1;
    }

    mem_cpy(vec->data + index * vec->size_data, data, vec->size_data);

    return vec;
}