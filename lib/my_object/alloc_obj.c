/*
** EPITECH PROJECT, 2023
** create_str.c
** File description:
** create a str_t (string)
*/

#include "my_object.h"
#include "my_utils.h"

void * alloc_obj(int type, size_t size)
{
    void * obj = malloc(sizeof(int) + size);

    mem_cpy(obj, &type, sizeof(int));

    return obj + sizeof(int);
}
