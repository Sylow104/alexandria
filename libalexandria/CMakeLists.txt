cmake_minimum_required(VERSION 3.10)
project(libalexandria VERSION 0.0.1)
FILE(GLOB C_SRC src/*.c)

add_library(alexandria ${C_SRC})
target_include_directories(alexandria PUBLIC include)