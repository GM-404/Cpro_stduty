# 这个模块中的CMakeLists.txt会被根目录下的CMakeLists.txt调用
# 设定动态库名称，这里使用set命令创建了一个自定义变量add.lib,记录了一个字符串add

set(add.lib add)

# 新增一个动态库构建目标
# 第一个参数和构建可执行程序目标一样，是名称，第二个是构建静态库，SHARED是动态库，
add_library(${add_lib} SHARED source/add.cpp)

# 设置动态库DLL的输出路径
set(add.dll ${CMAKE_CURRENT_SOURCE_DIR}/${CMAKE_BUILD_TYPE}/${add_lib}.dll)

# 在动态库构建目标结束后，拷贝.dll文件到可执行程序目录下
# add_custom_command是添加自定义命令
# TARGET表示目标，这里是${add_lib}，表示在构建${add_lib}目标后执行
# POST_BUILD表示在构建结束后执行
# COMMAND表示执行的命令
# ${CMAKE_COMMAND}表示CMake命令
# -E表示执行命令
# copy_if_different表示只有文件不同才拷贝
# ${add.dll}表示要拷贝的文件
# ${CMAKE_CURRENT_BINARY_DIR}表示可执行程序的输出路径
add_custom_command(TARGET ${add_lib} POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
    ${add.dll}
    ${EXE_DIR}
)