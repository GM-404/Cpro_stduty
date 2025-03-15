#include <iostream>
#include "LOG.hh"

struct Vector2
{
    float x, y;

    Vector2(float x, float y)
        : x(x),
          y(y) {}
    Vector2 add(const Vector2 &v) const // 加法
    {
        return Vector2(x + v.x, y + v.y);
    }
    Vector2 multiply(const Vector2 &v) const // 乘法  //Vector2 为返回的类型
    {
        return Vector2(x * v.x, y * v.y);
    }
    Vector2 operator+(const Vector2 &v) const // 重载操作符
    {
        return add(v);
        // return Vector2(x + v.x, y + v.y);
    }
    Vector2 operator*(const Vector2 &v) const
    {
        return multiply(v);
        // return Vector2(x * v.x, y * v.y);
    }
    bool operator==(const Vector2 &v) const
    {
        return x == v.x && y == v.y;
    }
    bool operator!=(const Vector2 &v) const
    {
        return !(*this == v);
    }
};
std::ostream &operator<<(std::ostream &stream, const Vector2 &v)
{
    stream << v.x << " " << v.y;
    return stream;
}
int main()
{
    Vector2 position(0.0f, 0.0f);
    Vector2 speed(1.0f, 1.0f);
    Vector2 powerup(1.1f, 1.1f);
    Vector2 v3 = position.add(speed.multiply(powerup));
    Vector2 v4 = position + speed * powerup;
    std::cout << v3.x << " " << v3.y << std::endl;
    std::cout << v4 << std::endl; // 会显示这个操作符没有重载
    LOG(v3.x << " " << v3.y);
    LOG(v4.x << " " << v4.y);
    if (v3 == v4)
    {
        LOG("equal");
    }
    if (v3 != v4)
    {
        LOG("not equal");
    }
}
