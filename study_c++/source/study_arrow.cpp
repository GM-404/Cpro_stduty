#include <iostream>
#include "LOG.hh"

// 箭头运算符，可以帮助指针对象用箭头直接获取目标对象
class entity
{
public:
    int x, y;

public:
    void print() const
    {
        LOG("Hello GM");
    }
};
class ScopedPtr
{
private:
    entity *m_ptr;

public:
    ScopedPtr(entity *ptr)
    {
        m_ptr = ptr;
    }
    ~ScopedPtr()
    {
        delete m_ptr;
    }
    entity *GetPtr() const { return m_ptr; } // 将指针返回
    const entity *operator->() const
    {
        LOG("const");
        return m_ptr;
    }
    entity *operator->()
    {
        LOG("no const");
        return m_ptr;
    }
};
class Vector3
{
public:
    int x, y, z;
};
int main()
{
    entity e;
    e.print();

    entity *e1 = &e;
    e1->print(); // 箭头运算符，访问成员函数
    e1->x = 1;

    ScopedPtr ptr = new entity();
    ptr.GetPtr()->print();

    const ScopedPtr ptr1 = new entity();
    ptr1->print(); // 使用const的操作符号

    ScopedPtr ptr2 = new entity();
    ptr2->print(); // 使用没有const的操作符号
}