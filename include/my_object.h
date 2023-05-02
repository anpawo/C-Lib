/*
** EPITECH PROJECT, 2023
** my_object.h
** File description:
** header
*/

#ifndef MY_OBJECT
    #define MY_OBJECT

    #include <stdlib.h>
    #include <stdarg.h>

enum OBJECT {
    STR,
    VEC,
    LIST,
    DICT
};



// static const void * DESTROY_OBJ[] = {
//     &destroy_str
//     // { VEC, "vector", &create_vec },
//     // { LIST, "list", &__list },
//     // { DICT, "dict", &__dict }
// };

typedef struct str_s {
    size_t len;
    size_t cap;
    char data[0];
} str_t;

typedef struct list_s {
    size_t len;
    size_t cap;
    void * data[0];
} list_t;

void * create_obj(int type, ...);
str_t * create_str(va_list ap);

#endif /* MY_OBJECT */
