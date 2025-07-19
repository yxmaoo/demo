cmake_minimum_required(VERSION 3.10)

# 设置项目名称和语言（显式指定C++）
project(demo LANGUAGES CXX C)

set(CMAKE_CXX_STANDARD 11)

set(EXECUTABLE_OUTPUT_PATH ../bin)
# 添加include文件夹与lib文件夹，避免找不到yaml-cpp的头文件与库文件
include_directories(include)
link_directories(lib)

add_executable(demo src/main.cpp)


# 在编译可执行文件时，添加YAML_CPP_STATIC_DEFINE宏
target_compile_definitions(demo PUBLIC YAML_CPP_STATIC_DEFINE)

# 链接静态库
target_link_libraries(demo libyaml-cpp.a)

