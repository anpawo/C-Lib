/*
** EPITECH PROJECT, 2023
** create_str.c
** File description:
** create a str_t (string)
*/

#include "my_object.h"

void * vec_delete(void * ptr, va_list ap);

static const void * DELETE_DATA[] = {
    &vec_delete,
    NULL, /* list */
    NULL, /* dico */
};

void * delete(void * ptr, ...)
{
    void * obj = * (void **) ptr;
    int type = get_obj_type(obj);
    void * (* delete_data)(void *, va_list) = DELETE_DATA[type];
    va_list ap;

    va_start(ap, ptr);
    obj = delete_data(ptr, ap);
    va_end(ap);

    return obj;
}
