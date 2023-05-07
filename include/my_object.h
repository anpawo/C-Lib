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
 * @brief functions to create objects. they represent an index of the function
 * used to create them. they are many ways to create certain objects.
*/
enum OBJECT {
    VEC,
    LIST,
    DICT,
    STR,
};

enum SPECIAL_CREATE {
    NSTR = STR + 1
};

VEC_DEF(char, str)
VEC_DEF(int, int)
VEC_DEF(size_t, ulong)
VEC_DEF(double, double)

typedef struct list_s {
    size_t len;
    size_t cap;
    void * data[0];
} list_t;

/**
 * @brief create an object. objects are auto-freed thanks to the id attached
 * to them. The id is used by the macro AUTO_FREE.
*/
void * create(int type, ...);
void * append(void * ptr, ...);
void * insert(void * ptr, ...);
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
