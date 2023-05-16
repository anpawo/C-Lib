/*
** EPITECH PROJECT, 2023
** create_obj.c
** File description:
** create an object
*/

#include "my_object.h"

void * vec_duplic(vec_t * vec);
list_t * list_duplic(list_t * list);
dict_t * dict_duplic(dict_t * dict);

static const void * DUP_OBJ[] = {
    &vec_duplic,
    &list_duplic,
    &dict_duplic,
};

// TODO: ap argument detail
void * dup_obj(void * obj)
{
    int type = get_obj_type(obj);
    void * (* duplicate_obj)(void * obj) = DUP_OBJ[type];
    void * new = duplicate_obj(obj);

    return new;
}
