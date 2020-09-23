cmake_minimum_required(VERSION 3.17.3) 

project(QuantityMeasurement_CPP) 

add_subdirectory(googletest)

include_directories(googletest/include) 

add_executable(executableTests main/Feet.h main/Feet.cpp test/QuantityMeasurementTest.cpp) 

target_link_libraries(executableTests PRIVATE gtest)