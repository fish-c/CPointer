cmake_minimum_required(VERSION 3.14)
project(CPointer C)

set(CMAKE_C_STANDARD 11)

add_executable(main main.c)
set_target_properties(main PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/")

add_executable(define define.c)
add_executable(array array.c)