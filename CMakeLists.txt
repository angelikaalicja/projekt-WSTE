cmake_minimum_required (VERSION 2.6)
project (Quiz)
add_executable(Quiz main.cpp operating_functions.cpp question.cpp quiz.cpp)
add_definitions(-std=c++11)
