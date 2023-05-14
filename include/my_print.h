/*
** EPITECH PROJECT, 2023
** my_utils.h
** File description:
** header
*/

#ifndef MY_PRINT
    #define MY_PRINT

    #include "my_lib.h"

size_t print(const char * str, ...);

static void add_chr(str_t ** str, va_list ap);
static void add_str(str_t ** str, va_list ap);
static void add_int(str_t ** str, va_list ap);
static void add_flt(str_t ** str, va_list ap);
static void add_obj(str_t ** str, va_list ap);

#endif /* MY_PRINT */
