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
    AUTOFREE str_t * str2 = duplic(str);
    AUTOFREE list_t * list = LIST(2);
    AUTOFREE dict_t * dict = DICT(5);
    AUTOFREE str_t * test = string(str, NULL);

    append(&str2, ", ca va ?");
    append(&list, duplic(str));
    append(&list, duplic(str2));
    append(&dict, "salution1", STR("hello"));
    append(&dict, "salution2", duplic(str2));
    append(&dict, "lister", duplic(list));

    print("%o\n%o\n%s\n", list, dict, test->data);
}
