cmake_minimum_required(VERSION 3.5)

project(Singly_linked_list LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Singly_linked_list main.cpp mylist.h mylist.cpp)
