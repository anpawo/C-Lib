/*
** EPITECH PROJECT, 2023
** my_utils.h
** File description:
** header
*/

#ifndef MY_DICT
    #define MY_DICT

    #include "my_object.h"

dict_t * create_dict(va_list ap);
dict_t * dict_duplic(dict_t * dict);

dict_t * dict_append(dict_t ** ptr, va_list ap);
dict_t * dict_insert(dict_t ** ptr, va_list ap);
dict_t * dict_delete(dict_t * dict, va_list ap);
dict_t * dict_update(dict_t * dict, va_list ap);

void destroy_dict(dict_t * dict);

str_t * dict_to_str(dict_t * dict, str_t ** buff);

/* special method */

/**
 * @brief hash a key
 *
 * @param key key to hash
 *
 * @return the hashed key
*/
size_t hash_key(const char * key);

/**
 * @brief check if a bucket contain a key.
 * put the index in buff if possible.
 *
 * @param bucket list to check
 * @param key key to check
 * @param buff buffer for the index found
 *
 * @param int 1 or 0
*/
int key_in_bucket(const list_t * bucket, const char * key, size_t * buff);

// int in_dict(dict_t * dict, char * key, size_t * buff);

#endif /* MY_DICT */
