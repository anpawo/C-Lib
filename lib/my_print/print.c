/*
** EPITECH PROJECT, 2023
** mem_cpy.c
** File description:
** utils
*/

#include "my_lib.h"
#include <unistd.h>

char ** FORMAT = {
    "c", &add_chr,
    "s", &add_str,
    "d", &add_int,
    "f", &add_flt,
    "o", &add_obj,
};

static void add_element(str_t ** str, va_list ap, char type)
{
    int index = 0;
    void (* add) (str_t **, va_list);

    if (type == '%') {
        append(str, TOSTR(va_arg(ap, int))); // maybe need to cast char
        return;
    }

    for (; *(FORMAT[index]) != type; index += 2);

    add = FORMAT[index + 1];

    add(str, ap);
}

static void parse_format(const char * format, str_t ** str, va_list ap)
{
    while (*format) {
        if (*format == '%') {
            format += 1;
            add_element(str, ap, *format);
        } else {
            append(str, TOSTR(*format));
        }
        format += 1;
    }
}

size_t print(const char * format, ...)
{
    AUTOFREE str_t * str = STR("");
    va_list ap;

    va_start(ap, str);
    parse_format(format, &str, ap);
    va_end(ap);

    write(STDOUT_FILENO, str->data, str->len);

    return str->len;
}