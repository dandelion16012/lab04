

cmake_minimum_required(VERSION 3.4)
project(formatter_ex_lib)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(formatter_ex_lib STATIC formatter_ex.cpp )
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/../formatter_lib ${CMAKE_CURRENT_BINARY_DIR}/fomatter) # Так как в нашем проекте используется библиотека, написанная нами до этого, необходимо указать cmake, где искать файлы. 
target_include_directories(formatter_ex_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(formatter_ex_lib formatter_lib) # Чтобы связать уже существующую библитеку с экспериментальной, используем target_link_libraries.
