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
    size_t h = hash_key(key) % dict->cap;
    size_t index = 0;

    if (key_in_bucket(dict->buck[h], key, &index)) {
        delete(&(dict->buck[h]), index);
        delete(&(dict->buck[h]), index);
    }

    return dict;
}
