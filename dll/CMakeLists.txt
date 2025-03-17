# 项目最低版本要求
cmake_minimum_required(VERSION 3.10)

# 项目名称
project(libdll)

# 在 CMakeLists.txt 中添加
include_directories(include)
add_executable(lib_say_hello

    ${CMAKE_CURRENT_SOURCE_DIR}/source/say_hello.cpp
)