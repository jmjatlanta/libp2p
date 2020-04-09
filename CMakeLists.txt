cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(test)

add_subdirectory(src)
add_subdirectory(test)

enable_testing ()
add_test(NAME DialerTest COMMAND dialer_tests)

