// #include <iostream>

// // 定义一个结构体
// struct Result
// {
//     int intValue;
//     double doubleValue;
//     char charValue;
// };

// // 返回结构体的函数
// Result getMultipleValues()
// {
//     Result result;
//     result.intValue = 10;
//     result.doubleValue = 3.14;
//     result.charValue = 'A';
//     return result;
// }

// int main()
// {
//     Result res = getMultipleValues();
//     std::cout << "Int value: " << res.intValue << std::endl;
//     std::cout << "Double value: " << res.doubleValue << std::endl;
//     std::cout << "Char value: " << res.charValue << std::endl;
//     return 0;
// }
/*_____________________________________________________________________________________*/
// #include <iostream>
// #include <tuple>

// // 返回std::tuple的函数
// std::tuple<int, double, char> getMultipleValuesWithTuple()
// {
//     return std::make_tuple(10, 3.14, 'A');
// }

// int main()
// {
//     auto res = getMultipleValuesWithTuple();
//     int intValue = std::get<0>(res);
//     double doubleValue = std::get<1>(res);
//     char charValue = std::get<2>(res);

//     std::cout << "Int value: " << intValue << std::endl;
//     std::cout << "Double value: " << doubleValue << std::endl;
//     std::cout << "Char value: " << charValue << std::endl;
//     return 0;
// }
/*_____________________________________________________________________________________*/
#include <iostream>

// 使用引用参数的函数
void getMultipleValuesByReference(int &intValue, double &doubleValue, char &charValue)
{
    intValue = 10;
    doubleValue = 3.14;
    charValue = 'A';
}
int main()
{
    int intValue = 10;
    double doubleValue = 3.1415926;
    char charValue = 'B';

    getMultipleValuesByReference(intValue, doubleValue, charValue);

    std::cout << "Int value: " << intValue << std::endl;
    std::cout << "Double value: " << doubleValue << std::endl;
    std::cout << "Char value: " << charValue << std::endl;
    return 0;
}