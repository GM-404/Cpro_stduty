#include <iostream>
#include "LOG.hh"

class entity
{
private:
    std::string m_name;
    int m_age;

public:
    entity(const std::string &name)
        : m_name(name),
          m_age(-1) {}
    // explicit entity(int age)  // 这里使用了explicit,下面隐式转换的部分会报错
    entity(int age)
        : m_name("default name"),
          m_age(age)
    {
    }
};
void PrintEntity(const entity &e)
{
    // PrintEntitys(e);
}
int main()
{
    PrintEntity(23);                // 隐式转换
    PrintEntity(std::string("gm")); // 先由数组转换为string再转换为entity

    entity e1("gm");
    entity e2(23);

    entity e3 = entity("gm");
    entity e4 = 23; // 这里使用了隐式转换  如果构造函数前面加了explicit,这里就会报错
}