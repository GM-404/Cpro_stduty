# 这个模块中的CMakeLists.txt会被根目录下的CMakeLists.txt调用
# 设定静态库名称，这里使用set命令创建了一个自定义变量hello_lib,记录了一个字符串say_hello

set(hello_lib say_hello)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

# 新增一个静态库构建目标
# 第一个参数和构建可执行程序目标一样，是名称，第二个是构建静态库，SHARED是动态库，
add_library(${hello_lib} STATIC source/say_hello.cpp)

# 向这个静态库中添加头文件路径
# include_directories是为整个项目添加头文件搜索路径
# 这里的target_include_directories只是为指定的构建目标添加头文件搜索路径
# 第一个参数是构建目标，第二个参数指定了添加方式，PUBLIC,PRIVATE,INTERFACE,第三个参数是头文件搜索路径
target_include_directories(${hello_lib} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
