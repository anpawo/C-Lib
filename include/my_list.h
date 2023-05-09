/*
** EPITECH PROJECT, 2023
** my_utils.h
** File description:
** header
*/

#ifndef MY_LIST
    #define MY_LIST

    #include "my_object.h"

void * resize_list(void * ptr, size_t len);
void destroy_list(void * ptr);

/**
 * @brief add some data at the end of a list
 *
 * @param ptr ptr to the target list
 * @param ap: [data]
 *
 * @return target list
*/
void * list_append(void * ptr, va_list ap);

/**
 * @brief insert some data in a list
 *
 * @param ptr ptr to the target list
 * @param ap: [index, data]
 *
 * @return target list
*/
void * list_insert(void * ptr, va_list ap);

/**
 * @brief delete some data of a list
 *
 * @param ptr ptr to the target list
 * @param ap: [index]
 *
 * @return target list
*/
void * list_delete(void * ptr, va_list ap);

/**
 * @brief update some data in a list
 *
 * @param ptr ptr to the target list
 * @param ap: [index, data]
 *
 * @return target list
*/
void * list_update(void * ptr, va_list ap);

#endif /* MY_LIST */
