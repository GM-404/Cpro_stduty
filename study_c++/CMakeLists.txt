# 项目最低版本要求
cmake_minimum_required(VERSION 3.10)

# 项目名称
project(study_c++)

# 在 CMakeLists.txt 中添加
include_directories(include)
add_executable(my_study_c++

    # ${CMAKE_CURRENT_SOURCE_DIR}/source/study_pointer.cpp
    # ${CMAKE_CURRENT_SOURCE_DIR}/source/study_quote.cpp
    # ${CMAKE_CURRENT_SOURCE_DIR}/source/study_class.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/source/study_class_log.cpp
)