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
 * @brief existing objects. they represent an index of the function used
 * to create them. they are many ways to create certain objects.
*/
enum OBJECT {
    STR,
    NSTR,
    VEC,
    LIST,
    DICT,
};

/*
INT = VEC,
ULONG = VEC
*/

VEC_DEF(char, str)
VEC_DEF(int, int)
VEC_DEF(size_t, ulong)

typedef struct list_s {
    size_t len;
    size_t cap;
    void * data[0];
} list_t;

/**
 * @brief set the type of an object
 *
 * @param obj target object
 * @param type type of the obj
*/
void set_obj_type(void * obj, int type);

/**
 * @brief get the type of an object
 *
 * @param obj target obj
 *
 * @return type of the object as an integer
*/
int get_obj_type(void * obj);

/**
 * @brief create an object. objects are auto-freed thanks to the id attached
 * to them. The id is used by the macro AUTO_FREE aka __attribute__((cleanup)).
*/
void * create(int type, ...);
void * create_str(va_list ap);
// void * create_vec(va_list ap);

#endif /* MY_OBJECT */
