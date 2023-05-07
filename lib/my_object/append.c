/*
** EPITECH PROJECT, 2023
** create_str.c
** File description:
** create a str_t (string)
*/

#include "my_object.h"

void * vec_append(void * ptr, va_list ap);
// void * list_append(void ** ptr, va_list ap);
// void * dict_append(void ** ptr, va_list ap);

static const void * APPEND_DATA[] = {
    &vec_append,
    NULL, /* list */
    NULL, /* dico */
    // &str_append,
};

void * append(void * ptr, ...)
{
    void * obj = * (void **) ptr;
    int type = get_obj_type(obj);
    void * (* append_data)(void **, va_list) = APPEND_DATA[type];
    va_list ap;

    va_start(ap, ptr);
    obj = append_data(ptr, ap);
    va_end(ap);

    return obj;
}
