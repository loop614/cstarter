#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "rust.h"

void panic(const char *msg) {
    fprintf(stderr, "%s:%d Error: %s\n", __FILE__, __LINE__, msg);
    exit(EXIT_FAILURE);
}
#define UNWRAP(R) ((R).is_ok ? (R).value : (panic((R).error), 0))

#define T checked_add(0, 0)
RESULT(int, const char *) checked_add(int a, int b) {
    if (a > 0 && b > INT_MAX - a) return ERR(T, "Int overflow");
    if (a < 0 && b < INT_MIN - a) return ERR(T, "Int underflow");
    return OK(T, a + b);
}
#undef T

int rust(void) {
    int a = 34, b = 35;
    int c = UNWRAP(checked_add(34, 35));
    printf("%d + %d = %d\n", a, b, c);
}
