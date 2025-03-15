#include <iostream>
#include "LOG.hh"

class entity
{
private:
    int m_x, m_y;
    mutable int count = 0; // mutable允许修改const成员变量的值

public:
    entity(int x, int y) // 标准的构造函数
        : m_x(x),
          m_y(y)
    {
    }

    // const int *const get_x() const
    // {
    //     //  m_x = 2;    //这是不允许的，在类中的成员函数里面的const限制(只能读)
    //     return m_x;
    // }
    int get_x() const
    {
        //  m_x = 2;    //这是不允许的，在类中的成员函数里面的const限制(只能读)
        count++; // 这是允许的,因为他是mutable
        return m_x;
    }
    int get_x()
    {
        m_x = 2;
        return m_x;
    }
    void set_x(int y) // 设置
    {
        m_y = y;
    }
};
void PrintEntity(const entity &e) // 意味着只能对entity对象中的const进行操作
{
    LOG(e.get_x());
}
void PrintEntitys(entity &e) // 意味着只能对entity对象中的没有const进行操作
{
    LOG(e.get_x());
}

int main()
{
    const int MAX_VALUE = 90; // 常量变量

    int *a = new int;

    *a = 2;
    a = (int *)&MAX_VALUE;
    *a = 2; // 绕开常量限制
    LOG(*a);

    const int *const b = &MAX_VALUE; // 常量指针常量
    // 以*为分界，const在左面就是内容不能变，在右面就是指针不能变
    //   *b = 2;   //这是不允许的，前面一个const 限制
    //  b = (int *)&MAX_VALUE;  //这是不允许的，后面一个const 限制
    LOG(*b);

    entity e(1, 2);
    PrintEntity(e);
    PrintEntitys(e);

    const entity e1(1, 2);
    e1.get_x(); // 这里的get_x()是有const的的那个，e1这个对象是const的，只能调用const的成员函数，不能调用非const的成员函数
}
