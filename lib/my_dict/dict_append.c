/*
** EPITECH PROJECT, 2023
** create_str.c
** File description:
** create a str_t (string)
*/

#include "my_dict.h"
#include "my_utils.h"

void * dict_append(void * ptr, va_list ap)
{
    dict_t * dict = * (void **) ptr;
    char * key = va_arg(ap, char *);
    void * data = va_arg(ap, void *);
    size_t h = hash_key(key) % dict->cap;
    size_t index = 0;

    if (dict->buck[h] == NULL) {
        dict->buck[h] = create(LIST, 2);
    }

    if (key_in_bucket(dict->buck[h], key, &index)) {
        update(&(dict->buck[h]), index + 1, data);
    } else {
        append(&(dict->buck[h]), key);
        append(&(dict->buck[h]), data);
    }

    return dict;
}
