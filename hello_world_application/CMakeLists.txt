cmake_minimum_required(VERSION 3.4)
project(hello_world)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/../formatter_ex_lib ${CMAKE_CURRENT_BINARY_DIR}/formatter)

add_executable(example hello_world.cpp) # В данном проекте требуется создать исполняемый файл, а не библитеку.
target_link_libraries(example formatter_ex_lib)


