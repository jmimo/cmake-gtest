# http://www.kaizou.org/2014/11/gtest-cmake/


cmake_minimum_required(VERSION 3.3)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(ekf)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -stdlib=libc++ -v")

add_subdirectory(src)
add_subdirectory(test)