/*
** EPITECH PROJECT, 2023
** create_str.c
** File description:
** create a str_t (string)
*/

#include "my_object.h"
#include "my_utils.h"

void set_obj_type(void * obj, int type)
{
    int * ptr = obj - S_TYPE;

    ptr[0] = type;
}

int get_obj_type(void * obj)
{
    int * ptr = obj - S_TYPE;
    int type = (int)(ptr[0]);

    return type;
}
