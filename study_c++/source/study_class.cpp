#include <iostream>
#include "LOG.hh"
using namespace std;

class Entity
{
public:
    int x, y;
    int speed;
    void move(int dx, int dy) // 这个move函数就变成了一个成员函数
    {
        x += dx;
        y += dy;
    }
    Entity() // 构造函数
    {
        LOG("Entity()");
    }
    ~Entity() // 析构函数
    {
        LOG("~Entity()");
    }
};

// 这是写在外面的写法
//  void move(Entity &e, int dx, int dy)
//  {
//      e.x += dx;
//      e.y += dy;
//  }
int main()
{
    Entity a;
    a.x = 0;
    a.y = 0;
    a.speed = 30;

    a.move(10, 20);
    LOG(a.x << " " << a.y);
    LOG("GM");
    return 0;
}