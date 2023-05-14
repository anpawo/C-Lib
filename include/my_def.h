/*
** EPITECH PROJECT, 2023
** my_def.h
** File description:
** header
*/

#ifndef MY_DEF
    #define MY_DEF

    #include <stddef.h>

    #define UNUSED __attribute__((unused))

    #define TOSTR(c) ((char[]){c, '\0'})

    #define AUTOFREE __attribute__((cleanup(destroy)))

    #define STR(s) create(STR, s)
    #define VEC(t, n) create(VEC, t, n)
    #define LIST(n) create(LIST, n)
    #define DICT(n) create(DICT, n)

    #define ABS(x) (((x) < 0) ? -(x) : (x))

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

/* can be any ptr */
typedef struct list_s {
    size_t len;
    size_t cap;
    str_t * data[0];
} list_t;

typedef struct item_s {
    str_t * key;
    str_t * data;
} item_t;

typedef struct dict_s {
    size_t len;
    size_t cap;
    item_t * item[0];
} dict_t;

#endif /* MY_DEF */
