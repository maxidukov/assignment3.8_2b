cmake_minimum_required(VERSION 3.5)

project(assignment3_8__2b_QC LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCES main.cpp badparams.cpp base.cpp triangle.cpp isosceles.cpp right_triangle.cpp equilateral.cpp quadrangle.cpp parallelogram.cpp rectangle.cpp square.cpp rhombus.cpp)
set(HEADERS badparams.h base.h triangle.h isosceles.h right_triangle.h equilateral.h quadrangle.h parallelogram.h rectangle.h square.h rhombus.h)

add_executable(assignment3_8__2b_QC ${SOURCES} ${HEADERS})
