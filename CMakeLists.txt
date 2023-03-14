cmake_minimum_required(VERSION 3.4) # указываем необходимую минимальную версию cmake
project(formatter_lib)              # Задаём имя проекта

set(CMAKE_CXX_STANDARD 11)          # Указывает требуемую версию стандарта С++
set(CMAKE_CXX_STANDARD_REQUIRED ON) # Указываем, что данное требование к стандарту обязательно
project(formatter)
add_library(formatte STATIC ${CMAKE_CURRENT_SOURCE_DIR} /formatter.cpp)
