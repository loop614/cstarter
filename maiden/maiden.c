#include <stdio.h>
#include <stdbool.h>

#include "startertypes.h"

void detect_my_os() {
#if __linux__
    printf("detected linux OS\n");
#endif
#if __unix__
    printf("detected unix OS\n");
#endif
#if _POSIX_VERSION
    printf("detected POSIX based OS.\n");
#endif
#if __APPLE__
    printf("detected apple\n");
#endif
#if _WIN64
    printf("detected windows\n");
#endif
}

void detect_space() {
    printf("sizeof(bool) = %d <- this should be 1 byte\n", sizeof(bool));
    printf("sizeof(u8) = %d <- this should be 1 byte\n", sizeof(u8));
    printf("sizeof(u16) = %d <- this should be 2 bytes\n", sizeof(u16));
    printf("sizeof(u32) = %d <- this should be 4 bytes\n", sizeof(u32));
    printf("sizeof(u64) = %d <- this should be 8 bytes\n", sizeof(u64));
}

#include "maiden.h"
