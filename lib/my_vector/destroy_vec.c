/*
** EPITECH PROJECT, 2023
** create_str.c
** File description:
** create a str_t (string)
*/

#include "my_vector.h"
#include "my_utils.h"

void destroy_vec(vec_t * vec)
{
    try_free((int *) vec - 1);
}
