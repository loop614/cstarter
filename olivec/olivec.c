#include "olivec.h"
#include <stdio.h>

void olivec_macros()
{

    int a = 1, b = 2;
    a = -1;
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    if (1)
        OLIVEC_SWAP(int, a, b);

    printf("a = %d\n", a);
    printf("b = %d\n", b);

    b = OLIVEC_ABS(int, b);
    printf("b = %d\n", b);
}
