/*
** EPITECH PROJECT, 2023
** create_obj.c
** File description:
** create an object
*/

#include "my_object.h"

void destroy_vec(vec_t * vec);
void destroy_list(list_t * list);
void destroy_dict(dict_t * dict);

static const void * DESTROY_OBJ[] = {
    &destroy_vec,
    &destroy_list,
    &destroy_dict,
};

void destroy(void * obj)
{
    int type = 0;
    void (* destroy_obj)(void *) = NULL;

    if (obj == NULL) {
        return;
    }

    type = get_obj_type(obj);
    destroy_obj = DESTROY_OBJ[type];
    destroy_obj(obj);
}

void auto_free(void * ptr)
{
    void * obj = * (void **) ptr;

    destroy(obj);
}
