#include <iostream>
#include "log.hh"

static int a = 10;
class Entity
{
public:
    int x;
    static int y; // 静态成员变量
    static void class_print()
    {
        // LOG(x);   这是错误的，因为x是非静态成员变量
        LOG(y);
    }
};
// 这里的x和y是类的成员变量,链接到了全局变量
int Entity::y;

static void out_print(Entity &e1)
{
    LOG(e1.x << " " << e1.y);
}
void Increment()
{
    static int b = 0;
    int c = 0;

    b++;
    c++;

    LOG("b: " << b); // b随着函数调用而增加
    LOG(c);          // c随着函数调用不增加
}
int main()
{
    LOG(a); // 这个a不是全局变量，是局部变量，只能在这个编译单元里面使用
    Entity e;
    e.x = 0;
    e.y = 0;
    Entity e1;
    e1.x = 1;
    e1.y = 1;
    LOG(e.x << " " << e.y);
    LOG(e1.x << " " << e1.y); // 这里y打印出来的东西是一样的
    Entity::class_print();
    out_print(e1);
    Increment();
    Increment();
    Increment();
    Increment();

    return 0;
}