cmake_minimum_required(VERSION 3.14)
project(lab03-uml-relationships-sharks)

set(CMAKE_CXX_STANDARD 17)
set(SOURCE_FILES Student.cpp Student.h Course.cpp Course.h Person.cpp Person.h Professor.cpp Professor.h Administrative.cpp Administrative.h)
add_executable(lab03-uml-relationships-sharks ${SOURCE_FILES})