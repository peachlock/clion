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
add_executable(pb_559 Pb_Info/559.cpp)
add_executable(ex_test_info Pb_Info/ex_test_info.cpp
        Pb_Info/recursiv_01.cpp
        Pb_Info/recursiv_02.cpp
        Pb_Info/recursiv_03.cpp)
add_executable(recursiv_01 Pb_Info/recursiv_01.cpp)
add_executable(recursiv_02 Pb_Info/recursiv_02.cpp)
add_executable(recursiv_03 Pb_Info/recursiv_03.cpp)
