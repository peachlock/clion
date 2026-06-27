cmake_minimum_required(VERSION 4.2)
project(clion)

set(CMAKE_CXX_STANDARD 20)

# Executabil separat pentru fiecare problema
add_executable(pb_816 Pb_Info/816.cpp)
add_executable(pb_2938 Pb_Info/2938.cpp)
add_executable(pb_2201 Pb_Info/2201.cpp)
add_executable(pb_3978 Pb_Info/3978.cpp)
add_executable(pb_833 Pb_Info/833.cpp)
add_executable(pb_106 Pb_Info/106.cpp)
