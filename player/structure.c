//
// Created by loop on 7/2/23.
//
#include <stdio.h>
#include "structure.h"

void print_my_data(MyData);
void print_my_data2(MyData*);

void play_structure()
{
    MyData data = {
        .number = 1,
        .letter = 'a',
        .choice = UP
    };

    printf("%d ", data.number);
    printf("%c ", data.letter);
    printf("%d ", data.choice);
    printf("at ");
    printf("%p\n", &data);

    print_my_data(data);
    print_my_data2(&data);
}

void print_my_data(MyData data)
{
    printf("%d ", data.number);
    printf("%c ", data.letter);
    printf("%d ", data.choice);
    printf("at ");
    printf("%p\n", &data);
}

void print_my_data2(MyData* data)
{
    printf("%d ", data->number);
    printf("%c ", data->letter);
    printf("%d ", data->choice);
    printf("at ");
    printf("%p\n", data);
}
