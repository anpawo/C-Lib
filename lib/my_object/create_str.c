/*
** EPITECH PROJECT, 2023
** create_str.c
** File description:
** create a str_t (string)
*/

#include "my_object.h"
#include "my_utils.h"

static void * create_string(char * init, size_t len)
{
    size_t cap = pad_len(len + 1);
    str_t * str = malloc(S_TYPE + sizeof(str_t) + cap * sizeof(char)) + S_TYPE;

    set_obj_type(str, VEC);
    str->size_data = sizeof(char);
    str->cap = cap;
    str->len = len;
    mem_cpy(str->data, init, len);
    str->data[len] = '\0';

    return str;
}

void * create_nstr(va_list ap)
{
    char * init = va_arg(ap, char *);
    size_t len = va_arg(ap, size_t);

    return create_string(init, len);
}

void * create_str(va_list ap)
{
    char * init = va_arg(ap, char *);
    size_t len = str_len(init);

    return create_string(init, len);
}
