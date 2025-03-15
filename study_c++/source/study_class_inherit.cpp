#include <iostream>
#include "LOG.hh"

class Printable
{
public:
    virtual std::string Get_yourName() = 0; // 演示纯虚函数
};
class father : public Printable
{
public:
    float x, y;               // 坐标
    void move(int dx, int dy) // 移动
    {
        x = x + dx;
        y = y + dy;
    }

public:
    virtual std::string GetName() { return "fater"; }; // 演示虚函数
    std::string Get_yourName() override { return "fater"; };
};
class son : public father, public Printable // 公开叫爸爸
{
private:
    std::string m_name;

public:
    son() {}
    son(const std ::string &name)
        : m_name(name) {}

    std::string GetName() override { return m_name; };
    std::string Get_yourName() override { return "son"; };
};
void PrintName(father *f)
{
    LOG(f->GetName());
}
int main()
{
    son s;
    s.x = 10;
    s.y = 20;
    s.move(10, 20);
    LOG(s.x << " " << s.y);

    father *f = new son("123");
    PrintName(f);

    son *s1 = new son("3631");
    PrintName(s1); // 这里调用子类的成员函数，因为子类重写了父类的成员函数

    // 纯虚函数章节
    son *s2 = new son("3632");
    son s2_1("3633");
    LOG(s2->Get_yourName());
    LOG(s2_1.Get_yourName());

    return 0;
}