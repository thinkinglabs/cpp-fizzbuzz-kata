project(MyHello CXX)
cmake_minimum_required(VERSION 2.8)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_executable(fizzbuzz fizzbuzz.cpp)

install(TARGETS fizzbuzz DESTINATION bin)
