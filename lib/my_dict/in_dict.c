/*
** EPITECH PROJECT, 2023
** create_str.c
** File description:
** create a str_t (string)
*/

#include "my_dict.h"
#include "my_utils.h"

int in_dict(dict_t * dict, char * key, size_t * buff)
{
    size_t index = 0;

    while (index < dict->len) {
        if (str_cmp(key, dict->item[index]->key->data) == 0) {
            break;
        }
        index += 1;
    }

    if (index != dict->len) {
        if (buff != NULL) {
            * buff = index;
        }
        return 1;
    }

    return 0;
}
