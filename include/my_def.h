/*
** EPITECH PROJECT, 2023
** my_def.h
** File description:
** header
*/

#ifndef MY_DEF
    #define MY_DEF

    #define UNUSED __attribute__((unused))
    #define STR(c) (char[]){c, '\0'}

    #define AUTO_FREE __attribute__((cleanup(destroy)))

    #define vec_t str_t
    #define VEC_DEF(type, name)     \
                                    \
    typedef struct vec_##name##_s {  \
        int size_data;              \
        size_t len;                 \
        size_t cap;                 \
        type data[0];               \
    } name##_t;

#endif /* MY_DEF */
