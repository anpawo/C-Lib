/*
** EPITECH PROJECT, 2023
** my_utils.h
** File description:
** header
*/

#ifndef MY_VEC
    #define MY_VEC

    #include "my_object.h"

void * resize_vec(void * ptr, size_t len);
void destroy_vec(void * ptr);

/**
 * @brief add some data at the end of a vector
 *
 * @param ptr ptr to the target vector
 * @param ap: [data]
 *
 * @return target vector
*/
void * vec_append(void * ptr, va_list ap);

/**
 * @brief insert some data in a vector
 *
 * @param ptr ptr to the target vector
 * @param ap: [index, data]
 *
 * @return target vector
*/
void * vec_insert(void * ptr, va_list ap);

/**
 * @brief delete some data of a vector
 *
 * @param ptr ptr to the target vector
 * @param ap: [index]
 *
 * @return target vector
*/
void * vec_delete(void * ptr, va_list ap);

/**
 * @brief update some data in a vector
 *
 * @param ptr ptr to the target vector
 * @param ap: [index, data]
 *
 * @return target vector
*/
void * vec_update(void * ptr, va_list ap);

#endif /* MY_VEC */
