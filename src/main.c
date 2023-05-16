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
    AUTOFREE dict_t * dict = DICT(5);
    AUTOFREE list_t * list2 = dup_obj(list);

    append(&str2, ", ca va ?");
    append(&list, dup_obj(str));
    append(&list, dup_obj(str2));
    append(&dict, "salution1", STR("hello"));
    append(&dict, "salution2", dup_obj(str2));
    append(&dict, "lister", dup_obj(list));
    append(&dict, "lister2", dup_obj(list2));

    print("%o\n%o\n%o\n", list, list2, dict);
}
