/*
** EPITECH PROJECT, 2023
** create_str.c
** File description:
** create a str_t (string)
*/

#include "my_dict.h"
#include "my_utils.h"

void * dict_delete(void * ptr, va_list ap)
{
    dict_t * dict = * (void **) ptr;
    char * key = va_arg(ap, char *);
    size_t index = 0;

    if (in_dict(dict, key, &index)) {
        destroy_item(dict->item[index]);
    }

    if (index < dict->len - 1) {
        mem_cpy(
            dict->item + index,
            dict->item + index + 1,
            (dict->len - index - 1) * sizeof(void *)
        );
    }

    dict->len -= 1;

    return dict;
}
