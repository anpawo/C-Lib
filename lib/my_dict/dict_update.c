/*
** EPITECH PROJECT, 2023
** create_str.c
** File description:
** create a str_t (string)
*/

#include "my_dict.h"
#include "my_utils.h"

static void * insert_at_end(void * ptr, ...)
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
    dict_t * dict = ptr;
    char * key = va_arg(ap, char *);
    void * data = va_arg(ap, void *);
    size_t index = 0;

    if (in_dict(dict, key, &index)) {
        destroy(&(dict->item[index]->data));
        dict->item[index]->data = data;
        return dict;
    }

    return insert_at_end(ptr, key, data);
}
