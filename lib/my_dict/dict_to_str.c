/*
** EPITECH PROJECT, 2023
** create_str.c
** File description:
** create a str_t (string)
*/

#include "my_dict.h"
#include "my_utils.h"

// TODO: split in two functions

str_t * dict_to_str(dict_t * dict, str_t ** buff)
{
    str_t * str = NULL;

    if (buff == NULL) {
        str = STR("{");
    } else {
        str = *buff;
        append(&str, "{");
    }

    for (size_t i = 0; i < dict->cap; i++) {
        if (dict->buck[i] == NULL) {
            continue;
        }
        for (size_t n = 0; n < dict->buck[i]->len; n += 2) {
            string(dict->buck[i]->data[n], &str);
            append(&str, ": ");
            string(dict->buck[i]->data[n + 1], &str);
            append(&str, ", ");
        }
    }
    if (str->data[str->len - 1] == ' ') {
        str->len -= 2;
    }
    append(&str, "}");

    if (buff != NULL) {
        *buff = str;
    }

    return str;
}
