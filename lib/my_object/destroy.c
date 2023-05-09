/*
** EPITECH PROJECT, 2023
** create_obj.c
** File description:
** create an object
*/

#include "my_object.h"

void destroy_vec(void * ptr);
void destroy_list(void * ptr);

static const void * DESTROY_OBJ[] = {
    &destroy_vec,
    &destroy_list,
    // &destroy_dict,
};

void destroy(void * ptr)
{
    void * obj = * (void **) ptr;
    int type = get_obj_type(obj);
    void * (* destroy_obj)(void *) = DESTROY_OBJ[type];

    destroy_obj(obj);
}
