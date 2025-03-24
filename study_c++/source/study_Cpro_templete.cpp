#include <iostream>
#include <string>

/*模板只有在调用他的时候，他才会被创建，所以如果有错误但是没有调用，就不会报错*/
template <typename GM> // 用class也可以
void print(GM value)
{
    std::cout << value << std::endl;
}

template <typename T, int N>
class Array
{
private:
    T m_array[N];

public:
    int getLength() const { return N; }
};

int main()
{
    print(5);
    print("Hello");
    print(5.5f);
    // 如果不想隐式转换，可以使用模板特化
    print<double>(5.5f);
    print<float>(5.5f);
    print<std::string>("Hello");

    Array<double, 5> array;
    std::cout << array.getLength() << std::endl;

    return 0;
}