#include <iostream>
#include "LOG.hh"

// private 只能在类内部或者友元访问
// protected 只能在类内部或者子类访问
// public 只能在类内部或者子类访问

class entity
{
private:
    int x, y;

public:
    entity()
    {
        x = 0;
        y = 0;
    }
};
class son : public entity
{
};
int main()
{
}