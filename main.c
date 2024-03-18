#include <stdio.h>
#include "maiden/maiden.h"
#include "player/array.h"
#include "player/structure.h"
#include "olivec/olivec.h"
#include "rust/rust.h"

int main() {
    detect_my_os();
    detect_space();
    play_array();
    play_structure();
    olivec_macros();
    rust();

    return 0;
}
