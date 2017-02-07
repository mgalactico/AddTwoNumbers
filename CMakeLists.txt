cmake_minimum_required(VERSION 3.6)
project(AddTwoNumbers)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wpedantic -std=c++14")
include_directories(/usr/src/googletest-release-1.8.0/googletest/include)
include_directories(/usr/src/googletest-release-1.8.0/googlemock/include)
include_directories(/home/mgalactico/Documents/C++Primer/AddTwoNumbers/Tests)

set(SOURCE_FILES main.cpp Tests/mytests.cpp Tests/mytest.h)
add_executable(AddTwoNumbers ${SOURCE_FILES} Tests/mytests.cpp Tests/mytest.h)
target_link_libraries(AddTwoNumbers gtest gtest_main)