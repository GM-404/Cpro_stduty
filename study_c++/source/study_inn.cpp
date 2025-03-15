#include <iostream>
#include "LOG.hh"

// 作用域
class entity
{
public:
    entity()
    {
        std::cout << "created entity" << std::endl;
    }
    ~entity()
    {
        std::cout << "destroyed entity" << std::endl;
    }
};
// 错误示例
// int *Create_array(int size)
// {
//     int array[size]; // 建立在栈上面的，一旦函数结束，就会被销毁
//     return array;
// }
// 正确示例
int *Create_array(int size)
{
    int *array = new int[size]; // 建立在堆上面的，需要手动销毁
    return array;
}

class ScopedPte
{
private:
    entity *m_ptr;

public:
    ScopedPte(entity *ptr)
        : m_ptr(ptr)
    {
    }
    ~ScopedPte()
    {
        delete m_ptr;
    }
};
int main()
{
    // 栈的作用域实例
    {
        entity e;
    }
    LOG("END"); // 可以看到这里的建立在栈上的entity对象已经被销毁

    // 堆的作用域实例
    {
        entity *e = new entity();
        LOG("END"); // 可以看到这里的建立在堆上的entity对象没有被销毁
        delete e;   // 建立在堆上的entity对象需要手动
    }

    int *array = Create_array(10);
    *array = 1;       // 赋值array[0]
    *(array + 1) = 2; // 赋值array[1]

    LOG(array[0]);
    LOG(array[1]);

    delete[] array; // 手动销毁

    // 有没有什么办法，将自动销毁堆上的对象，变成自动销毁呢？
    // 答案：智能指针
    {
        ScopedPte e = new entity();
    }
    return 0;
}