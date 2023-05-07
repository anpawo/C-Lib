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
void destroy_vec(void * vec);

/**
 * @brief add data to a vector
 *
 * @param vec ptr to the target vector
 * @param ap va_list containing the data to add
 *
 * @return target vector
*/
void * vec_append(void * ptr, va_list ap);
void * vec_insert(void * ptr, va_list ap);
// void * update(void ** obj, size_t index, void * data);
// void * delete(void ** obj, size_t index);

#endif /* MY_VEC */
