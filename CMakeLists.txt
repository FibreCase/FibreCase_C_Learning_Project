cmake_minimum_required(VERSION 3.26)
project(fibrecase_c_learning C)

set(CMAKE_C_STANDARD 11)

add_executable(fibrecase_c_learning
        history_code_another.c
        histroy_code.c
        main.c
        test.c)

add_executable(main main.c)
add_executable(test test.c)
add_executable(ChemCalu SubProjects/ChemCalu.c)