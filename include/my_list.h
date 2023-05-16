/*
** EPITECH PROJECT, 2023
** my_utils.h
** File description:
** header
*/

#ifndef MY_LIST
    #define MY_LIST

    #include "my_object.h"

list_t * create_list(va_list ap);
list_t * resize_list(list_t ** ptr, size_t len);
list_t * list_duplic(list_t * list);

list_t * list_append(list_t ** ptr, va_list ap);
list_t * list_insert(list_t ** ptr, va_list ap);
list_t * list_delete(list_t * list, va_list ap);
list_t * list_update(list_t * list, va_list ap);

void destroy_list(list_t * list);

str_t * list_to_str(list_t * list, str_t ** buff);

#endif /* MY_LIST */
