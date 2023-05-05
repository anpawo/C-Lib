/*
** EPITECH PROJECT, 2023
** create_obj.c
** File description:
** create an object
*/

#include "my_object.h"

static const void * CREATE_OBJ[] = {
    &create_str,
    // &create_nstr,
    // &create_vec
};

// static const void * DESTROY_OBJ[] = {
//     &destroy_str
//     // { VEC, "vector", &create_vec },
//     // { LIST, "list", &__list },
//     // { DICT, "dict", &__dict }
// };

void * create(int type, ...)
{
    void * obj = NULL;
    void * (* create_obj)(va_list) = CREATE_OBJ[type];
    va_list ap;

    va_start(ap, type);
    obj = create_obj(ap);
    va_end(ap);

    return obj;
}
