/*
** EPITECH PROJECT, 2023
** create_str.c
** File description:
** create a str_t (string)
*/

#include "my_vector.h"
#include "my_utils.h"

static void * create_string(char * init, size_t len)
{
    size_t cap = pad_len(len + 1);
    str_t * str = alloc_obj(VEC, sizeof(str_t) + cap * sizeof(char));

    str->size_data = sizeof(char);
    str->cap = cap;
    str->len = len;
    mem_cpy(str->data, init, len);
    str->data[len] = '\0';

    return str;
}

static void * create_vector(int size_data, size_t len)
{
    size_t cap = pad_len(len);
    vec_t * vec = alloc_obj(VEC, sizeof(vec_t) + cap * size_data);

    vec->size_data = size_data;
    vec->cap = cap;
    vec->len = 0;

    return vec;
}

void * create_nstr(va_list ap)
{
    size_t len = va_arg(ap, size_t);
    char * init = va_arg(ap, char *);

    return create_string(init, len);
}

void * create_str(va_list ap)
{
    char * init = va_arg(ap, char *);
    size_t len = str_len(init);

    return create_string(init, len);
}

void * create_vec(va_list ap)
{
    int size_data = va_arg(ap, int);
    size_t len = va_arg(ap, size_t);

    return create_vector(size_data, len);
}
