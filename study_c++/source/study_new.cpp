#include <iostream>
#include "LOG.hh"
#include <string>

// new的主要目的是在堆区开辟内存
using String = std::string;

class entity
{
private:
    String m_name;

public:
    entity::entity()
        : m_name("default name")
    {
    }
    entity(String name)
        : m_name(name)
    {
    }
};
int main()
{
    int a = 2;
    int *b = new int;             // 一个单一四字节，在堆上开辟内存
    int *c = new int[3];          // 一个数组，三个单一四字节在堆上开辟内存
    entity *e = new entity("gm"); // 在堆上分配我们的entity对象
    entity *e1 = new entity[50];  // 在堆上分配50个entity对象
    delete b;
    delete[] c;
    delete e;
    delete[] e1;
    return 0;
}