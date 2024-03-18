#ifndef CSTARTER_OLIVEC_H
#define CSTARTER_OLIVEC_H

#define OLIVEC_SWAP(T, a, b) do {T t = a; a = b; b = t;} while (0)
#define OLIVEC_SIGN(T, x) ((T)(x > 0) - (T)(x < 0))
#define OLIVEC_ABS(T, x) (OLIVEC_SIGN(T, x)*(x))

void olivec_macros();

#endif //CSTARTER_OLIVEC_H
