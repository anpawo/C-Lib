/*
** EPITECH PROJECT, 2023
** create_obj.c
** File description:
** create an object
*/

#include "my_object.h"

void * vec_update(void * ptr, va_list ap);
void * list_update(void * ptr, va_list ap);
void * dict_update(void * ptr, va_list ap);

static const void * UPDATE_DATA[] = {
    &vec_update,
    &list_update,
    &dict_update,
};

void * update(void * ptr, ...)
{
    void * obj = * (void **) ptr;
    int type = get_obj_type(obj);
    void * (* update_data)(void *, va_list) = UPDATE_DATA[type];
    va_list ap;

    va_start(ap, ptr);
    obj = update_data(obj, ap);
    va_end(ap);

    return obj;
}
