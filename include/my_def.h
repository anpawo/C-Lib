/*
** EPITECH PROJECT, 2023
** my_def.h
** File description:
** header
*/

#ifndef MY_DEF
    #define MY_DEF

    #define UNUSED __attribute__((unused))

    #define TOSTR(c) ((char[]){c, '\0'})

    #define AUTO_FREE __attribute__((cleanup(destroy)))

    #define STR(s) create(STR, s)
    #define VEC(s, n) create(VEC, s, n)
    /* TODO */

    #define vec_t str_t
    #define VEC_DEF(type, name)     \
                                    \
    typedef struct vec_##name##_s { \
        int size_data;              \
        size_t len;                 \
        size_t cap;                 \
        type data[0];               \
    } name##_t;

/**
 * @brief functions to create objects. they represent an index of the function
 * used to create them. they are many ways to create certain objects.
*/
enum OBJECT {
    VEC,
    LIST,
    DICT,
    STR,
};

enum SPECIAL_CREATE {
    NSTR = STR + 1
};

VEC_DEF(char, str)
VEC_DEF(int, int)
VEC_DEF(size_t, ulong)
VEC_DEF(double, double)

typedef struct list_s {
    size_t len;
    size_t cap;
    void * data[0];
} list_t;

#endif /* MY_DEF */
