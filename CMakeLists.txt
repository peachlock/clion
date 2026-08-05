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
        Pb_Info/recursiv_03.cpp
        Pb_Info/pb_898.cpp
        Pb_Info/pb_896.cpp
        Pb_Info/pb_24.cpp
        Pb_Info/pb_25.cpp
        Pb_Info/pb_26.cpp
        Pb_Info/pb_2859.cpp
        Pb_Info/pb_1633.cpp
        Pb_Info/pb_905.cpp
        Pb_Info/pb_894.cpp
        Pb_Info/pb_35.cpp
        Pb_Info/pb_40.cpp
        Pb_Info/pb_4238.cpp
        Pb_Info/pb_42.cpp
        Pb_Info/ex_sir_char.cpp
)
add_executable(recursiv_01 Pb_Info/recursiv_01.cpp)
add_executable(recursiv_02 Pb_Info/recursiv_02.cpp)
add_executable(recursiv_03 Pb_Info/recursiv_03.cpp)
add_executable(pb_897 Pb_Info/pb_897.cpp)
add_executable(pb_898 Pb_Info/pb_898.cpp)
add_executable(pb_896 Pb_Info/pb_896.cpp)
add_executable(pb_24 Pb_Info/pb_24.cpp)
add_executable(pb_25 Pb_Info/pb_25.cpp)
add_executable(pb_26 Pb_Info/pb_26.cpp)
add_executable(pb_2859 Pb_Info/pb_2859.cpp)
add_executable(pb_21 Pb_Info/pb_21.cpp)
add_executable(pb_906 Pb_Info/pb_906.cpp)
add_executable(pb_1633 Pb_Info/pb_1633.cpp)
add_executable(pb_905 Pb_Info/pb_905.cpp)
add_executable(pb_894 Pb_Info/pb_894.cpp)
add_executable(pb_35 Pb_Info/pb_35.cpp)
add_executable(pb_40 Pb_Info/pb_40.cpp)
add_executable(pb_4238 Pb_Info/pb_4238.cpp)
add_executable(pb_42 Pb_Info/pb_42.cpp)
add_executable(ex_sir_char Pb_Info/ex_sir_char.cpp
        Pb_Info/pb_972.cpp
        Pb_Info/pb_rec1.cpp
        Pb_Info/pb_rec2.cpp
        Pb_Info/pb_rec3.cpp
        Pb_Info/pb_rec4.cpp
        Pb_Info/pb_rec5.cpp
        Pb_Info/pb_rec6.cpp
        Pb_Info/pb_rec7.cpp
        Pb_Info/pb_820.cpp
        Pb_Info/pb_4911.cpp)
add_executable(pb_972 Pb_Info/pb_972.cpp)
add_executable(pb_rec1 Pb_Info/pb_rec1.cpp)
add_executable(pb_rec2 Pb_Info/pb_rec2.cpp)
add_executable(pb_rec3 Pb_Info/pb_rec3.cpp)
add_executable(pb_rec4 Pb_Info/pb_rec4.cpp)
add_executable(pb_rec5 Pb_Info/pb_rec5.cpp)
add_executable(pb_rec6 Pb_Info/pb_rec6.cpp)
add_executable(pb_rec7 Pb_Info/pb_rec7.cpp)
add_executable(pb_820 Pb_Info/pb_820.cpp)
add_executable(pb_4911 Pb_Info/pb_4911.cpp)
