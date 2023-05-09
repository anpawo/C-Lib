/*
** EPITECH PROJECT, 2023
** create_str.c
** File description:
** create a str_t (string)
*/

#include "my_object.h"

void * vec_insert(void * ptr, va_list ap);
// void * list_append(void ** ptr, va_list ap);
// void * dict_append(void ** ptr, va_list ap);

static const void * INSERT_DATA[] = {
    &vec_insert,
    NULL, /* list */
    NULL, /* dico */
};

void * insert(void * ptr, ...)
{
    void * obj = * (void **) ptr;
    int type = get_obj_type(obj);
    void * (* insert_data)(void *, va_list) = INSERT_DATA[type];
    va_list ap;

    va_start(ap, ptr);
    obj = insert_data(ptr, ap);
    va_end(ap);

    return obj;
}
