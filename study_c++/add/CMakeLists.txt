# 这个模块中的CMakeLists.txt会被根目录下的CMakeLists.txt调用
# 设定动态库名称，这里使用set命令创建了一个自定义变量add.lib,记录了一个字符串add

set(add.lib add)

# 新增一个动态库构建目标
# 第一个参数和构建可执行程序目标一样，是名称，第二个是构建静态库，SHARED是动态库，
add_library(${add_lib} SHARED
    add.cpp
    add.hh)
