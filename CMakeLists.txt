cmake_minimum_required(VERSION 3.26)
project(C C)

set(CMAKE_C_STANDARD 11)

add_library(C library.c
        matrix.c
        test.c
        chenchuoi.c)
