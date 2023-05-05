/*
** EPITECH PROJECT, 2023
** my_def.h
** File description:
** header
*/

#ifndef MY_DEF
    #define MY_DEF

    #define S_TYPE sizeof(int)

    #define VEC_DEF(type, name) \
                                \
    typedef struct name##_s {   \
        int size_data;          \
        size_t len;             \
        size_t cap;             \
        type data[0];           \
    } name##_t;

    #define vec_t str_t

#endif /* MY_DEF */
