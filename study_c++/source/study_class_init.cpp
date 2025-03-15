#include <iostream>
#include "LOG.hh"

class Entity
{
private:
    std::string m_name;

public:
    int x, y;
    // 构造函数(两种)
    Entity()
        : m_name("default name"),
          x(0),
          y(0) {}
    Entity(const std::string &name, int a, int b)
        : m_name(name),
          x(a),
          y(b) {}
    ~Entity() {}
    const std::string &get_name() const
    {
        return m_name;
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
    Entity e("gm", 10, 20); // 它的生命周期为函数的生命周期，这个就是main的，要是单个函数里面的就是单个函数的
    log l;
    LOG(e.x << " " << e.y);
    // std::cin.get();

    Entity e1;
    LOG(e1.get_name());
}