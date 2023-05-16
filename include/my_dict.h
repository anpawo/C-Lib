/*
** EPITECH PROJECT, 2023
** my_utils.h
** File description:
** header
*/

#ifndef MY_DICT
    #define MY_DICT

    #include "my_object.h"

void * create_dict(va_list ap);

void * dict_append(void * ptr, va_list ap);
void * dict_insert(void * ptr, va_list ap);
void * dict_delete(void * ptr, va_list ap);
void * dict_update(void * ptr, va_list ap);
void * dict_duplic(void * obj);

void destroy_dict(dict_t * dict);

str_t * dict_to_str(dict_t * dict, str_t ** buff);

size_t hash_key(const char * str);

int key_in_bucket(const list_t * bucket, const char * key, size_t * buff);

// int in_dict(dict_t * dict, char * key, size_t * buff);

#endif /* MY_DICT */
