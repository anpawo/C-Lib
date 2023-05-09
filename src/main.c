/*
** EPITECH PROJECT, 2023
** main.c
** File description:
** mylib
*/

#include "project.h"

static void print_list(list_t * list)
{
    for (size_t i = 0; i < list->len; i++) {
        printf("%s\n", list->data[i]->data);
    }
}

int main(void)
{
    AUTO_FREE list_t * list = create(LIST, 1);

    append(&list, STR("hello"));
    append(&list, STR("yo"));
    append(&list, STR("salut"));
    insert(&list, 1, STR("boo"));
    insert(&list, 0, STR("boo"));
    update(&list, 0, STR("TEST"));
    delete(&list, 2);

    print_list(list);
}
