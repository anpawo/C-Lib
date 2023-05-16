/*
** EPITECH PROJECT, 2023
** create_str.c
** File description:
** create a str_t (string)
*/

#include "my_vector.h"
#include "my_utils.h"

// should be able to differenciate vector type double/size_t/int/char
// for now lets say that they are only string vectors
// should take a va_list with the type of data
// or the type should be more precises (float)

str_t * vec_to_str(vec_t * vec, str_t ** buff)
{
    str_t * str = NULL;

    if (buff == NULL) {
        str = STR("\"");
    } else {
        str = *buff;
        append(&str, "\"");
    }

    append(&str, vec->data);
    append(&str, "\"");

    if (buff != NULL) {
        *buff = str;
    }

    return str;
}
