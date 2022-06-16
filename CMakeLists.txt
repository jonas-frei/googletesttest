cmake_minimum_required(VERSION 3.12)

project(my_c_project)

add_subdirectory(googletest)

include_directories(googletest/include)

add_executable(mytests mytests.cpp myfunctions.c)

target_link_libraries(mytests PRIVATE gtest gtest_main)