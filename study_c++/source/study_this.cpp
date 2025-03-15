#include <iostream>
#include "LOG.hh"

// this 是一个指向当前对象的指针，该方法属于对象实例

class entity
{
public:
    int x, y;
    entity(int x, int y)
    {
        this->x = x; // this 指向当前实例  (*this).x = x;
        this->y = y;
    }
};

int main()
{
}