#include <iostream> //包含头文件iostream
#include <array>    //包含头文件array
#include <string>   //包含头文件string
#include <stdlib.h> //包含头文件stdlib
#include <memory>   //包含头文件memory   //智能指针

#include "string.h"
#include <cctype> //包含头文件cctype

// 原文链接：https://blog.csdn.net/Flag_ing/article/details/123361432

using namespace std; // 使用标准命名空间

int main(int argc, char **argv)
{
    std::string name1 = "gao"s + "ming";

    // //如字面值 'A' 表示的就是单独字符 A ，而字符串 "A" 代表了一个包含两个字符的字符数组，分别是字母 A 和空字符。
    // string s1;    // 初始化一个空字符串
    // string s2 = s1;   // 初始化s2，并用s1初始化
    // string s3(s2);    // 作用同上
    // string s4 = "hello world";   // 用 "hello world" 初始化 s4，除了最后的空字符外其他都拷贝到s4中
    // string s5("hello world");    // 作用同上
    // string s6(6,'a');  // 初始化s6为：aaaaaa
    // string s7(s6, 3);  // s7 是从 s6 的下标 3 开始的字符拷贝
    // string s8(s6, 3, 5);  // s7 是从 s6 的下标 pos 开始的 len 个字符的拷贝
    // string s9 = s6 + s7;  // s9 是 s6 和 s7 连接后的结果
    // cout << "s1: " << s1 << endl;
    // cout << "s2: " << s2 << endl;
    // cout << "s3: " << s3 << endl;
    // cout << "s4: " << s4 << endl;
    // cout << "s5: " << s5 << endl;
    // cout << "s6: " << s6 << endl;
    // cout << "s7: " << s7 << endl;
    // cout << "s8: " << s8 << endl;
    // cout << "s9: " << s9 << endl;
    // string s10, s11, s12;    // 初始化一个空字符串

    // // 单字符串输入，读入字符串，遇到空格或回车停止
    // cin >> s10;
    // // 多字符串的输入，遇到空格代表当前字符串赋值完成，转到下个字符串赋值，回车停止
    // cin >> s11 >> s12;
    // // 输出字符串
    // cout << s10 << endl;
    // cout << s11 << endl;
    // cout << s12 << endl;

    // //如果希望在最终读入的字符串中保留空格，可以使用 getline 函数，该函数会读取一整行，直到遇到换行符为止。
    // string s13 ;    // 初始化一个空字符串
    // getline(cin , s13);
    // cout << s13 << endl;  // 输出

    // //字符串的操作
    // string s14 = "abc";    // 初始化一个字符串
    // cout << s14.empty() << endl;  // s 为空返回 true，否则返回 false
    // cout << s14.size() << endl;   // 返回 s 中字符个数，不包含空字符
    // cout << s14.length() << endl;   // 作用同上
    // cout << s14[1] << endl;  // 字符串本质是字符数组
    // cout << s14[3] << endl;  // 空字符还是存在的

    // string s15 = "nice to meet you~";    // 初始化一个空字符串

    // 如果想要改变 string 对象中的值，必须把循环变量定义为引用类型。引用只是个别名，相当于对原始数据进行操作

    // 如果想要改变 string 对象中的值，必须把循环变量定义为引用类型。引用只是个别名，相当于对原始数据进行操作
    // for(auto &c : s15)
    //     c = toupper(c);
    // cout << s15 << endl; // 输出

    // // 在 s 的位置 0 之前插入 s2 的拷贝
    // s15.insert(0, "hello");
    // cout << s15 << endl;  // 输出 hello nice to meet you~
    // return 0;
    // s15.erase(0, 5);  // 删除从 pos 开始的 len 个字符
    // s15.assign("nice to meet you~");  // 用 args 的值替换 s 的内容
    // s15.replace(0, 5, "NICE"); // 用 s2 替换 s 中从 pos 开始的 len 个字符
    // s15.substr(pos, len);  // 返回 s 中从 pos 开始的 len 个字符的拷贝
    // s15.find(args);  // 返回 s 中第一个与 args 匹配的子串的位置
    // s.append(args)  // 在 s 的末尾添加 args 的拷贝
    // s.find(args)  // 查找 s 中 args 第一次出现的位置
    // s.rfind(args)  // 查找 s 中 args 最后一次出现的位置
    // s.find_first_of(args)  // 查找 s 中第一个与 args 中任意字符匹配的位置
    // s.find_last_of(args)  // 查找 s 中最后一个与 args 中任意字符匹配的位置

    // 将数值 val 转换为 string 。val 可以是任何算术类型（int、浮点型等）
    // string s = to_string(val);    // 将整数转换为字符串
    return 0;
}