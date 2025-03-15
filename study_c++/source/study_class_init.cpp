#include <iostream>
#include "LOG.hh"

class Entity
{
public:
    int x, y;
    // 构造函数
    Entity(int a, int b)
    {
        x = a;
        y = b;
    }
    ~Entity()
    {
        LOG("~Entity()");
    }
};
class log // 展示默认的构造函数
{
public:
    // log() = delete; // 不使用默认的构造函数
    log()
    {
        LOG("log() init");
    }

    static void print(int a, int b)
    {
        LOG(a << " " << b);
    }
};
int main()
{
    Entity e(10, 20);
    log l;
    LOG(e.x << " " << e.y);
    // std::cin.get();
}