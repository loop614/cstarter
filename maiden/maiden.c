#include <stdio.h>
#include <assert.h>

#include "maiden.h"
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
    assert(sizeof(b8) == 1 && "sizeof(bool) should be 1 byte\n");
    assert(sizeof(u8) == 1 && "sizeof(u8) should be 1 byte\n");
    assert(sizeof(u16) == 2 && "sizeof(u16) should be 2 bytes\n");
    assert(sizeof(u32) == 4 && "sizeof(u32) should be 4 bytes\n");
    assert(sizeof(u64) == 8 && "sizeof(u64) should be 8 bytes\n");
}
