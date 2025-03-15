#include <iostream>
#include "LOG.hh"
#include <cstring>
// 指针用->
// struct Vector2
// {
// public:
//     int x, y;
//     Vector2(int x, int y)
//     {
//         this->x = x;
//         this->y = y;
//     }
// };
// int main()
// {
// Vector2 v1(1, 2);
// Vector2 v2(v1);
// v2.x = 3;
// v2.y = 4;
// LOG(v1.x << " " << v1.y);
// LOG(v2.x << " " << v2.y);

// Vector2 *a = new Vector2(0, 0);
// Vector2 *b = a;
// b->x = 1;
// b->y = 1;
// LOG(a->x << " " << a->y);
// LOG(b->x << " " << b->y);
// delete a;

//     return 0;
// }
class String
{
private:
    char *m_buffer;
    unsigned int m_length;

public:
    String(const char *str)
    {
        m_length = strlen(str);
        m_buffer = new char[m_length + 1];
        memcpy(m_buffer, str, m_length); // 目的，来源，大小
        m_buffer[m_length] = '\0';       // 结尾,加上终止符
    }
    ~String() // 有new就有delete
    {
        delete[] m_buffer;
    }
    // String(const String &str) = delete; // 不允许拷贝
    String(const String &str) // 拷贝构造函数
    {
        m_length = str.m_length;
        m_buffer = new char[m_length + 1];
        memcpy(m_buffer, str.m_buffer, m_length);
        m_buffer[m_length] = '\0';
        LOG("copy constructor");
    }
    char &operator[](unsigned int index)
    {
        return m_buffer[index];
    }
    friend std::ostream &operator<<(std::ostream &stream, const String &str); // 友元函数
};
std::ostream &operator<<(std::ostream &stream, const String &str)
{
    stream << str.m_buffer;
    return stream;
}
void PrintString(const String &str) // 值传递  没有这个引用的话会再次复制一次
{
    std::cout << str << std::endl;
}
int main()
{
    String s1("gm");
    String s2 = s1; // 这会导致程序的崩溃,因为String类没有复制构造函数(浅拷贝)

    s2[1] = char('a');
    PrintString(s2);
    PrintString(s1);
}
