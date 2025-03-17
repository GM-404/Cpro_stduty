#include <iostream>
#include "LOG.hh"
#include <vector> //动态数组

struct Vectex
{
    float x, y, z;
    Vectex(float x, float y, float z)
        : x(x),
          y(y),
          z(z) {}
    Vectex(const Vectex &v) // 拷贝构造
        : x(v.x),
          y(v.y),
          z(v.z)
    {
        LOG("copy constructor");
    }
};
std ::ostream &operator<<(std::ostream &stream, const Vectex &v)
{
    stream << v.x << " " << v.y << " " << v.z;
    return stream;
}
void Founction(std::vector<Vectex> &vertices)
{
    vertices.pop_back();                  // 删除最后一个
    vertices.erase(vertices.begin() + 1); // 删除第二个
};
int main()
{
    std::vector<Vectex> vertices; // 动态数组
    vertices.reserve(3);          // 预留空间
    vertices.push_back({1.0f, 2.0f, 3.0f});
    vertices.push_back(Vectex(4.0f, 5.0f, 6.0f)); // 跟上一句一样
    vertices.emplace_back(7.0f, 8.0f, 9.0f);      // 等同于 push_back,但少一次复制

    Founction(vertices);
    // for (int i = 0; i < vertices.size(); i++)
    // {
    //     LOG(vertices[i]);
    //     // LOG(vertices[i].x << " " << vertices[i].y << " " << vertices[i].z); // 如果没有重载操作符，就只能一个一个输出
    // }
    // for (const Vectex &v : vertices) // 一般这样写,写引用就不会复制了
    // {
    //     LOG(v);
    // }
    for (const Vectex &v : vertices) // 一般这样写,写引用就不会复制了
    {
        LOG(v);
    }
    vertices.clear(); // 释放内存
}