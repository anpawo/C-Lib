/*
** EPITECH PROJECT, 2023
** my_utils.h
** File description:
** header
*/

#ifndef MY_VEC
    #define MY_VEC

    #include "my_object.h"

void * create_vec(va_list ap);
void * resize_vec(void ** ptr, size_t len);
void * vec_duplic(vec_t * vec);

void * create_str(va_list ap);
void * create_nstr(va_list ap);

void * vec_append(void ** ptr, va_list ap);
void * vec_insert(void ** ptr, va_list ap);
void * vec_update(vec_t * vec, va_list ap);
void * vec_delete(vec_t * vec, va_list ap);

void destroy_vec(vec_t * vec);

str_t * vec_to_str(vec_t * vec, str_t ** buff);

#endif /* MY_VEC */
