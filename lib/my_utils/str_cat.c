/*
** EPITECH PROJECT, 2023
** mem_cpy.c
** File description:
** utils
*/

#include "my_utils.h"

char * str_cat(char * dst, const char * src)
{
    size_t dstp = (size_t) dst + str_len(dst);

    while (*src) {
        ((char *) dstp)[0] = *src;
        dstp += 1;
        src += 1;
    }
    ((char *) dstp)[0] = '\0';

    return dst;
}
