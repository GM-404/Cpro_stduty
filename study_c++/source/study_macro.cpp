#include <iostream>
#include "LOG.hh"
#if 1 // 用if0来控制这个代码块是否执行
#define select 1

#if select == 0
#define log(x) std::cout << x << std::endl
#else
#define log(x) // 什么都不做
#endif

#endif

// 使用反斜杠来换行
#define GM 1\
2\
3

int main()
{
    log("hello world");
    LOG(GM);
    return 0;
}