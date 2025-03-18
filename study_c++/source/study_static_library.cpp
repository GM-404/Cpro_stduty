#include <iostream>
#include "LOG.hh"
#include "say_hello.hh"
// 静态库，将以二进制文件的形式进行链接，而不是获取实际依赖库的源代码并进行自己编译，
int main()
{
    say_hello();
}