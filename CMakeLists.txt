cmake_minimum_required(VERSION 3.27)
project(practicaopenmp)
#Habilita el soporte para OpenMP
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fopenmp")

set(CMAKE_CXX_STANDARD 17)

find_package(fmt)

add_executable(practicaopenmp main.cpp)

target_link_libraries(practicaopenmp fmt::fmt)
