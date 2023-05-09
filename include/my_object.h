/*
** EPITECH PROJECT, 2023
** my_object.h
** File description:
** header
*/

#ifndef MY_OBJECT
    #define MY_OBJECT

    #include <stdlib.h>
    #include <stdarg.h>

    #include "my_def.h"

/**
 * @brief create an object. an object is determined by it's type. every
 * object has some unique fonction made for it.
 *
 * @param type type of the object [STR, VEC, LIST, DICT]
 * @param -
 * @param str: [data]
 * @param vect: [data size, len]
 * @param list: [len]
 * @param dict: [len]
 *
 * @return a new object
*/
void * create(int type, ...);

/**
 * @brief append a certain type of data to an object. the data depends of the
 * object.
 *
 * @param ptr & object pointer
 *
 * @param vect: [data]
 * @param list: [data]
 * @param dict: [key, value]
 *
 * @return the target object
*/
void * append(void * ptr, ...);

/**
 * @brief insert some data to an object. the data depends of the
 * object.
 *
 * @param ptr & object pointer
 *
 * @param vect: [index, data]
 * @param list: [index, data]
 * @param dict: [key, value]
 *
 * @return the target object
*/
void * insert(void * ptr, ...);

/**
 * @brief update the data to an object. the data depends of the
 * object.
 *
 * @param ptr & object pointer
 *
 * @param vect: [index, data]
 * @param list: [index, data]
 * @param dict: [key, value]
 *
 * @return the target object
*/
void * update(void * ptr, ...);

/**
 * @brief delete a certain part of an object.
 *
 * @param ptr & object pointer
 *
 * @param obj vect: [index]
 * @param obj list: [index]
 * @param obj dict: [key]
 *
 * @return the target object
*/
void * delete(void * ptr, ...);

/**
 * @brief destroy an object. used to free the object depending on his type.
 *
 * @param ptr & oject ptr
*/
void destroy(void * ptr);

/**
 * @brief set the type of an object
 *
 * @param obj target object
 * @param type type of the object
*/
void set_obj_type(void * obj, int type);

/**
 * @brief get the type of an object
 *
 * @param obj target object
 *
 * @return type of the object as an integer
*/
int get_obj_type(void * obj);

/**
 * @brief allocate an object and his hidden part (type).
 *
 * @param type type of the object
 * @param size size of the structure of the object
 *
 * @return the allocated object
*/
void * alloc_obj(int type, size_t size);

#endif /* MY_OBJECT */
