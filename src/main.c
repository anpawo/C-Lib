/*
** EPITECH PROJECT, 2023
** main.c
** File description:
** mylib
*/

#include "project.h"

int main(void)
{
    AUTOFREE str_t * str = STR("hello");
    AUTOFREE str_t * str2 = dup_obj(str);
    AUTOFREE list_t * list = LIST(2);
    AUTOFREE dict_t * dict = DICT(2);

    append(&str2, ", ca va ?");
    append(&list, dup_obj(str));
    append(&list, dup_obj(str2));
    delete(&list, 0);
    // append(&dict, "salution1", dup_obj(str));
    // append(&dict, "salution2", dup_obj(str2));

    print("%o\n%o\n%o\n", str, str2, list);
}
