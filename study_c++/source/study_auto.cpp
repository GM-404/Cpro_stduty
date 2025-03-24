#include <iostream>
#include <string>
#include <vector>
// 尽可能不用auto，因为不好阅读,比较长的时候可以使用

/*在 C++ 中，字符串常量（像 "gm" 这样用双引号括起来的字符串）存储在只读内存区域。而 char* 类型一般用于指向可修改的字符数组。如果把字符串常量赋值给 char* 类型的指针，就可能会引发问题，
可以使用静态变量*/
const char *Getname()
{
    return "gm";
}
int main()
{

    auto name1 = Getname();
    std::cout << name1 << std::endl;

    std::vector<std::string> strings;
    strings.push_back("one");
    strings.push_back("two");
    strings.push_back("three");

    // for (auto it = strings.begin(); it != strings.end(); it++)
    for (std::vector<std::string>::iterator it = strings.begin(); it != strings.end(); it++) // 这里的类型是std::vector<std::string>::iterator
    {
        std::cout << *it << std::endl;
    }
}