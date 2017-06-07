cmake_minimum_required(VERSION 3.7)
project(ClassesAndObjects)

set(CMAKE_CXX_STANDARD 11)
include_directories(headers)
set(SOURCE_FILES main.cpp src/Person.cpp headers/Person.h src/Tweeter.cpp headers/Tweeter.h src/status.cpp headers/status.h)
add_executable(ClassesAndObjects ${SOURCE_FILES})