/*
** EPITECH PROJECT, 2023
** my_utils.h
** File description:
** header
*/

#ifndef MY_LIST
    #define MY_LIST

    #include "my_object.h"

void * create_list(va_list ap);
void * resize_list(void * ptr, size_t len);
void * list_duplic(void * obj);

void * list_append(void * ptr, va_list ap);
void * list_insert(void * ptr, va_list ap);
void * list_delete(void * ptr, va_list ap);
void * list_update(void * ptr, va_list ap);

void destroy_list(list_t * list);

str_t * list_to_str(list_t * list, str_t ** buff);

#endif /* MY_LIST */
