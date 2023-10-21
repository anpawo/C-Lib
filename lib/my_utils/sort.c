/*
** EPITECH PROJECT, 2023
** qsort.c
** File description:
** sort a list
*/

#include "my_object.h"
#include "my_utils.h"

static int default_compare(void * array, size_t i, size_t j) {
    list_t * list = array;
    str_t * s1 = list->data[i];
    str_t * s2 = list->data[j];

    return str_cmp(s1->data, s2->data);
}

static void default_swap(void * array, size_t i, size_t j) {
    list_t * list = array;
    void * temp = list->data[i];

    list->data[i] = list->data[j];
    list->data[j] = temp;
}

static size_t partition(
    void * array,
    size_t * index,
    int (* compare)(void *, size_t, size_t),
    void (* swap)(void *, size_t, size_t))
{
    size_t pivot = index[1];
    size_t i = index[0] - 1; // here create neg

    for (size_t j = index[0]; j <= index[1] - 1; j++) {
        if (compare(array, j, pivot) <= 0) {
            i++;
            swap(array, i, j);
        }
    }
    swap(array, i + 1, index[1]);
    return i + 1;
}

static void quicksort(
    void * array,
    size_t * index,
    int (* compare)(void *, size_t, size_t),
    void (* swap)(void *, size_t, size_t))
{
    if (index[0] >= index[1]) {
        return;
    }

    size_t pivot = partition(array, index, compare, swap);

    if (pivot > 0) {
        quicksort(array, (size_t[2]){index[0], pivot - 1}, compare, swap);
    }
    quicksort(array, (size_t[2]){pivot + 1, index[1]}, compare, swap);
}

void sort(
    void * array,
    size_t len,
    int (* compare)(void *, size_t, size_t),
    void (* swap)(void *, size_t, size_t))
{
    size_t index[2] = {0, len - 1};

    if (compare == NULL) {
        compare = &default_compare;
    }
    if (swap == NULL) {
        swap = &default_swap;
    }

    quicksort(array, index, compare, swap);
}
