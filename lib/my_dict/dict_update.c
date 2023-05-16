/*
** EPITECH PROJECT, 2023
** create_str.c
** File description:
** create a str_t (string)
*/

#include "my_dict.h"
#include "my_utils.h"

static void * convert_to_append(void * ptr, ...)
{
    dict_t * dict = NULL;
    va_list ap;

    va_start(ap, ptr);
    dict = dict_append(ptr, ap);
    va_end(ap);

    return dict;
}

void * dict_update(void * ptr, va_list ap)
{
    char * key = va_arg(ap, char *);
    void * data = va_arg(ap, void *);

    return convert_to_append(ptr, key, data);
}
