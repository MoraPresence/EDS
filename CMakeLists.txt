cmake_minimum_required(VERSION 3.16)
project(EDS C)

set(CMAKE_C_STANDARD 11)

add_executable(EDS main.c stribog/stribog_alg.h stribog/stribog_data.h stribog/structs.h stribog/stribog_alg.c EDS.h)