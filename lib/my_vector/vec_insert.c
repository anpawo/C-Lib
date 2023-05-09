/*
** EPITECH PROJECT, 2023
** create_str.c
** File description:
** create a str_t (string)
*/

#include "my_vector.h"
#include "my_utils.h"
#include "stdio.h"

static void * string_insert(void * ptr, char * data, size_t index)
{
    str_t * str = * (void **) ptr;
    size_t len_data = str_len(data);

    if (str->len + len_data + 1 > str->cap) {
        str = resize_vec(ptr, str->len + len_data + 1);
    }

    if (index < str->len) {
        for (size_t n = str->len - 1 + len_data; n > index; n--) {
            str->data[n] = str->data[n - len_data];
        }
    } else if (index > str->len) {
        index = str->len;
    }

    mem_cpy(str->data + index, data, len_data);
    str->len += len_data;
    str->data[str->len] = '\0';

    return str;
}

static void * vector_insert(void * ptr, void * data, size_t index)
{
    vec_t * vec = * (void **) ptr;
    size_t n = 0;

    if (vec->len == vec->cap) {
        vec = resize_vec(ptr, vec->cap + 1);
    }

    if (index < vec->len) {
        n = (vec->len + 1) * vec->size_data - 1;
        for (; n >= (index + 1) * vec->size_data; n--) {
            vec->data[n] = vec->data[n - vec->size_data];
        }
    } else if (index > vec->len) {
        index = vec->len;
    }

    mem_cpy(vec->data + index * vec->size_data, data, vec->size_data);
    vec->len += 1;

    return vec;
}

void * vec_insert(void * ptr, va_list ap)
{
    vec_t * vec = * (void **) ptr;
    size_t index = va_arg(ap, size_t);
    void * data = va_arg(ap, void *);
    size_t size_data = vec->size_data;

    if (size_data == sizeof(char)) {
        return string_insert(ptr, data, index);
    }

    return vector_insert(ptr, data, index);
}

