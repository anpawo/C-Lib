/*
** EPITECH PROJECT, 2023
** my_utils.h
** File description:
** header
*/

#ifndef MY_DICT
    #define MY_DICT

    #include "my_object.h"

void * resize_dict(void * ptr, size_t len);

void destroy_item(item_t * item);
void destroy_dict(void * ptr);

int in_dict(dict_t * dict, char * key, size_t * buff);

/**
 * @brief add some data at the end of a list
 *
 * @param ptr ptr to the target list
 * @param ap: [key, value]
 *
 * @return target list
*/
void * dict_append(void * ptr, va_list ap);

/**
 * @brief insert some data in a list
 *
 * @param ptr ptr to the target list
 * @param ap: [key, value]
 *
 * @return target list
*/
void * dict_insert(void * ptr, va_list ap);

/**
 * @brief delete some data of a list
 *
 * @param ptr ptr to the target list
 * @param ap: [key]
 *
 * @return target list
*/
void * dict_delete(void * ptr, va_list ap);

/**
 * @brief update some data in a list
 *
 * @param ptr ptr to the target list
 * @param ap: [key, value]
 *
 * @return target list
*/
void * dict_update(void * ptr, va_list ap);

/**
 * @brief create an item with a key/data
 *
 * @param key key of the item
 * @param data of the item
 *
 * @return a new item
*/
item_t * create_item(char * key, void * data);

#endif /* MY_DICT */
