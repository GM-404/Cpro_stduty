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
    # ${CMAKE_CURRENT_SOURCE_DIR}/source/study_class_log.cpp
    # ${CMAKE_CURRENT_SOURCE_DIR}/source/study_static.cpp
    # ${CMAKE_CURRENT_SOURCE_DIR}/source/study_enum.cpp
    # ${CMAKE_CURRENT_SOURCE_DIR}/source/study_class_init.cpp

    # ${CMAKE_CURRENT_SOURCE_DIR}/source/study_class_inherit.cpp
    # ${CMAKE_CURRENT_SOURCE_DIR}/source/study_visibility.cpp
    # ${CMAKE_CURRENT_SOURCE_DIR}/source/study_array.cpp
    # ${CMAKE_CURRENT_SOURCE_DIR}/source/study_const.cpp
    # ${CMAKE_CURRENT_SOURCE_DIR}/source/study_new.cpp
    # ${CMAKE_CURRENT_SOURCE_DIR}/source/study_explicit.cpp
    # ${CMAKE_CURRENT_SOURCE_DIR}/source/study_operator.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/source/study_this.cpp
)