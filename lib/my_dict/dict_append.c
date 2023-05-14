/*
** EPITECH PROJECT, 2023
** create_str.c
** File description:
** create a str_t (string)
*/

#include "my_dict.h"
#include "my_utils.h"
#include <stdio.h>

static void * update_value(dict_t * dict, size_t index, void * data)
{
    destroy(&(dict->item[index]->data));
    dict->item[index]->data = data;

    return dict;
}

void * dict_append(void * ptr, va_list ap)
{
    dict_t * dict = * (void **) ptr;
    char * key = va_arg(ap, char *);
    void * data = va_arg(ap, void *);
    size_t index = 0;

    if (in_dict(dict, key, &index)) {
        return update_value(dict, index, data);
    }

    if (dict->len == dict->cap) {
        dict = resize_dict(ptr, dict->cap + 1);
    }

    dict->item[dict->len] = create_item(key, data);
    dict->len += 1;

    return dict;
}
