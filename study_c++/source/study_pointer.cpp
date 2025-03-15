#include <iostream>
#include <cstring> // memset

#define LOG(x) std::cout << x << std::endl;
int main()
{
    int a = 10;
    int *p = &a; // p是指向a的指针
    LOG(p);      // 打印出来指针的地址
    LOG(*p);     // 打印出来指针指向的值

    char *p1 = nullptr;
    char *buffer = new char[3];
    memset(buffer, 'a', 3);
    // LOG(buffer);
    LOG(buffer[0]);
    LOG(buffer[1]);
    LOG(buffer[2]);

    delete[] buffer;
    return 0;
}