/*
** EPITECH PROJECT, 2023
** main.c
** File description:
** mylib
*/

#include "project.h"

int main(void)
{
    char * nbr = my_ftoa(0.123456, 5);
    printf("%s\n", nbr);
    free(nbr);
}
