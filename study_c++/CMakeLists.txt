# 项目最低版本要求
cmake_minimum_required(VERSION 3.10)
project(study_c++)
set(CMAKE_CXX_STANDARD 17)

# 在 CMakeLists.txt 中添加
# ${CMAKE_CURRENT_SOURCE_DIR}是预设变量，指的是当前CMakeLists.txt所在的路径
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
include_directories(../static/hello/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/add)

# 添加子目录
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/source SRC_LIST) # 以后可以使用 SRC_LIST代指这个路径下面的所有文件

# cmake中的变量都是字符串，使用${变量名}来引用,此处的PROJECT_NAME是预设变量，由project()函数自动赋值
add_executable(${PROJECT_NAME}

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
    # ${CMAKE_CURRENT_SOURCE_DIR}/source/study_this.cpp
    # ${CMAKE_CURRENT_SOURCE_DIR}/source/study_inn.cpp
    # ${CMAKE_CURRENT_SOURCE_DIR}/source/study_smart_ptr.cpp
    # ${CMAKE_CURRENT_SOURCE_DIR}/source/study_copy.cpp
    # ${CMAKE_CURRENT_SOURCE_DIR}/source/study_arrow.cpp
    # ${CMAKE_CURRENT_SOURCE_DIR}/source/study_array_dynamic.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/source/study_static_library.cpp

    # ${CMAKE_CURRENT_SOURCE_DIR}/source/study_dynamic_library.cpp
)

# 在构建目标结束后，拷贝.dll文件到可执行程序目录下
# 添加子目录，执行hello文件夹下面的CMakeLists.txt,其中构建了hello静态库
# ../ 表示上一级目录，所以 ../hello 指的是当前 CMakeLists.txt 文件所在目录的上一级目录下的 hello 目录
# ${CMAKE_CURRENT_BINARY_DIR}/hello：这是二进制目录参数，指定了子项目的构建输出目录
add_subdirectory(../static/hello ${CMAKE_CURRENT_BINARY_DIR}/static/hello)

# 向可执行文件添加链接库
# PUBLIC：表示该库对于当前目标是必需的，并且该依赖关系会传播给依赖于当前目标的其他目标。也就是说，如果有其他目标依赖于 ${PROJECT_NAME}，那么它们也会自动链接 say_hello 库。
# PRIVATE：表示该库仅用于当前目标的链接，不会传播给依赖于当前目标的其他目标。
# INTERFACE：表示该库不需要链接到当前目标，但依赖于当前目标的其他目标需要链接该库。
target_link_libraries(${PROJECT_NAME} PUBLIC say_hello)
