// https://blog.eevans.xyz/posts/c23-macros/

#include "startertypes.h"

#define RESULT(T, E) struct { b8 is_ok; union { T value; E error; }; }
#define OK(F, V) (typeof(F)) { .is_ok = TRUE, .value = V }
#define ERR(F, E) (typeof(F)) { .is_ok = FALSE, .error = E }

void panic(const char *msg);
int rust(void);
