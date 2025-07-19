cmake_minimum_required(VERSION 3.10)

# 设置项目名称和语言（显式指定C++）
project(demo LANGUAGES CXX C)

set(CMAKE_CXX_STANDARD 11)

set(EXECUTABLE_OUTPUT_PATH ../bin)

add_executable(demo src/main.c)