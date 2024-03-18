cmake_minimum_required(VERSION 3.25)
project(cstarter C)

include_directories("core")

set(CMAKE_C_STANDARD 23)

add_executable(cstarter main.c
    maiden/maiden.h
    maiden/maiden.c
    player/array.h
    player/array.c
    player/structure.h
    player/structure.c
    olivec/olivec.h
    olivec/olivec.c
    rust/rust.h
    rust/rust.c
)
