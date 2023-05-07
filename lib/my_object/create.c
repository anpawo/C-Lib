/*
** EPITECH PROJECT, 2023
** create_obj.c
** File description:
** create an object
*/

#include "my_object.h"

void * create_vec(va_list ap);
// void * create_list(va_list ap);
// void * create_dict(va_list ap);
void * create_str(va_list ap);
void * create_nstr(va_list ap);

static const void * CREATE_OBJ[] = {
    &create_vec,
    NULL, /* list */
    NULL, /* dico */
    &create_str,
    &create_nstr,
};

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
