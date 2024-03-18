#ifndef CSTARTER_STRUCTURE_H
#define CSTARTER_STRUCTURE_H

void play_structure();

typedef enum {
    LEFT = 0,
    RIGHT,
    UP,
    DOWN
} MyEnum;

typedef struct {
    int number;
    char letter;
    MyEnum choice;
} MyData;

#endif // CSTARTER_STRUCTURE_H
