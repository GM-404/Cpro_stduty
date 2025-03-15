#include <iostream>
#include "log.hh"
#include <memory> //包含头文件memory,智能指针
/*
智能指针，new，delete在堆上面分配内存，需要deleter来删除内存，释放内存
智能指针是实现这一过程自动化的一种方式，本质上一个原始指针的包装
*/

// unique_ptr 作用域指针，你不能复制他，因为指向同一内存块，当一个挂了之后，另外的直接也没用了
// share_ptr 共享指针  当引用次数变成0的时候才执行析构函数
// weak_ptr 弱指针 不会增加引用次数
class entity
{
public:
    entity()
    {
        LOG("creat entity");
    }
    ~entity()
    {
        LOG(" destory entity()");
    }
    void print()
    {
        LOG("GM");
    }
};
int main()
{
    // 作用域指针
    {
        // std::unique_ptr<entity> e(new entity());
        std::unique_ptr<entity> e = std::make_unique<entity>();
        e->print();
    } // 到这一步e指针会死掉，然后启动析构函数
    LOG("unique_ptr end");

    // 共享指针
    {
        std::weak_ptr<entity> weak_e;
        {
            std::shared_ptr<entity> e; // 先生成一个共享指针
            {
                std::shared_ptr<entity> share_entity = std::make_shared<entity>();
                e = share_entity;
                weak_e = share_entity;
            } // 到这一点share_entity指针会死掉，但还有e指针
            LOG("no die");
        } // 到这一步e指针会死掉，然后启动析构函数,弱指针不算次数
        LOG("die");
    }
}