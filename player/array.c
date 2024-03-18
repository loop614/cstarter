#include <stdio.h>
#include <stdlib.h>
#include "array.h"

static void print_my_array(int* array, size_t array_size);
static void init_my_array(int* array);

#define ARRAY_LEN 8

void play_array() {
    int* array = (int*) (calloc(ARRAY_LEN,  sizeof(int)));
    int array2[ARRAY_LEN];
    init_my_array(array2);
    print_my_array(array, ARRAY_LEN);
    size_t array2_size = sizeof(array2) / sizeof(array2[0]);
    print_my_array(array2, array2_size);
    printf("\n");
    free(array);
}

static void print_my_array(int* array, size_t array_size)
{
    for (int i = 0; i < array_size; i++) {
        printf("%d ", array[i]);
    }
}

static void init_my_array(int* array)
{
    for (int i = 0; i < ARRAY_LEN; i++) {
        array[i] = i + 1;
    }
}
