cmake_minimum_required(VERSION 3.14)
project(basic-00-example)

set(CMAKE_CXX_STANDARD 17)
set(SOURCE_FILES Student.cpp Student.h Course.cpp Course.h Person.cpp Person.h Professor.cpp Professor.h Administrative.cpp Administrative.h)
add_executable(basic-00-example.cpp ${SOURCE_FILES})