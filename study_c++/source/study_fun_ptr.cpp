// 函数指针，是将一个函数赋值给一个变量的指针，这样就可以通过这个指针来调用这个函数。
// 函数指针的声明方式：返回值类型(*指针变量名)(参数列表)
// 函数指针的赋值方式：指针变量名 = 函数名

#include <iostream>
#include <vector>
#include <functional>
void hello()
{
    std::cout << "Hello, world!" << std::endl;
}
int add(int a, int b)
{
    return a + b;
}

void PrintValue(int value)
{
    std::cout << "Value: " << value << std::endl;
}
void ForEach(const std::vector<int> &values, const std::function<void(int)> &func)
{
    for (int value : values)
    {
        func(value);
    }
}
int main()
{
    int (*p)(int, int) = add; // 函数指针的声明和赋值
    std::cout << p(1, 2) << std::endl;

    auto q = hello;
    q();

    void (*r)();
    r = hello;
    r();

    std::vector<void (*)()> v;
    v.push_back(hello);
    v.push_back(q);
    v.push_back(r);
    for (auto f : v)
    {
        f();
    }
    int a = 5;
    std::vector<int> value = {1, 2, 3, 4, 5};
    ForEach(value, PrintValue);
    ForEach(value, [=](int value) mutable
            { a =4 ;std::cout << "Value: " << a << std::endl; });

    auto lambda = [&a]()
    { std::cout << a << std::endl; };
    lambda();

    return 0;
}
