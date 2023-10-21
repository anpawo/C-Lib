/*
** EPITECH PROJECT, 2023
** main.c
** File description:
** mylib
*/

#include "project.h"
#include <time.h>


int main(void)
{
    AUTOFREE list_t * list = LIST(30);

    srand(time(NULL));

    for (int i = 0; i < 30; i++) {
        append(&list, STR(TOSTR(97 + (rand() % 26))));
    }
    print("%o\n", list);

    sort(list, (int)(list->len), NULL, NULL);

    print("%o\n", list);
}
