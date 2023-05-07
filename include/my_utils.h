/*
** EPITECH PROJECT, 2023
** my_utils.h
** File description:
** header
*/

#ifndef MY_UTILS
    #define MY_UTILS

    #include <stddef.h>

size_t str_len(char * str);
size_t pad_len(size_t len);

void * mem_cpy(void * dst, const void * src, size_t n);
void * mem_set(void * dst, int c, size_t n);

void try_free(void * ptr);

#endif /* MY_UTILS */
