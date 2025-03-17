#include <iostream> //包含头文件iostream
#include <array>    //包含头文件array
#include <string>   //包含头文件string
#include <stdlib.h> //包含头文件stdlib
#include <memory>   //包含头文件memory   //智能指针
#include "string.h"

// 全局变量
int val1;
int val2;
float val3;
double val4;
bool val5;

using namespace std; // 使用标准命名空间

int main(int argc, char **argv)
{
    // // 定义方式1：数据类型 数组名[元素个数];
    // int arr1[10];
    // // 使用数组下标对数组元素进行赋值或访问    剩余数据随机填充
    // arr1[0] = 10;
    // arr1[1] = 20;
    // arr1[2] = 30;
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << "arr1[" << i << "] = " << arr1[i] << endl;
    // }

    // // 定义方式2：数据类型 数组名[元素个数] =  {值1，值2 ，值3 ...};
    // // 若大括号{ }内的元素个数小于定义的数组长度，则剩余数据默认使用0填充
    // int arr2[10] = {100, 90, 80, 70, 60, 50, 40};
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << "arr[" << i << "] = " << arr2[i] << endl;
    // }

    // // 定义方式3：
    // // 数据类型 数组名[] =  {值1，值2 ，值3 ...};
    // int arr3[] = {100, 90, 80, 70, 60, 50, 40, 30, 20, 10};

    // // 数组占用内存空间大小：sizeof(arr)
    // // 数组单个元素占用内存空间大小：sizeof(arr[0])
    // // 数组长度：sizeof(arr) / sizeof(arr[0])
    // cout << "arr3 size: " << sizeof(arr3) << endl;
    // cout << "arr3[0] size: " << sizeof(arr3[0]) << endl;
    // cout << "arr3 length: " << sizeof(arr3) / sizeof(arr3[0]) << endl;
    // cout << "arr3 address: " << arr3 << endl;
    // cout << "arr3[0] address: " << &arr3[0] << endl;
    // cout << "&arr3 address: " << &arr3 << endl;

    //     //********************** 总结就是arr或&arr[0]代表数组首元素地址，&arr代表整个数组的地址。**********************//
    //     // 注：arr或&arr[0]：数组首元素的地址 ；一维数组的数组名均表示数组首元素地址，等价于相应的指针类型。除了sizeof(arr),&arr，其他操作都是对首元素的操作。
    //     // &arr：整个数组的地址【地址值相同，含义不同】。

    //     // 一维数组的数组名均表示数组首元素地址，等价于相应的指针类型。
    //     // arr + 1或&arr[0] + 1会跳过第1个元素【加上1个数组元素的字节数】。
    //     // arr或&arr[0]的地址类型为int *类型，使用int类型的指针（指向数组首元素的指针）接收。

    //     // &arr，表示整个数组的地址，指向整个数组，&arr + 1会跳过整个数组【加上整个数组的总字节数】，如int *p = (int *)(&arr + 1)，指针p指向数组的末尾。
    //     // &arr的地址类型为int (*)[数组长度]类型，使用数组指针（指向数组的指针）接收。

    // int arr[5] = {1, 2, 3, 4, 5};

    // /* 一维数组的地址与指针 */
    // int *p1 = (int *)(&arr + 1); //&arr：整个数组的地址	//&arr + 1：指向数组的末尾处
    // int *p2 = (int *)(arr + 1);  // arr等价于&arr[0]，类型为int *类型：数组首元素地址
    // cout << p1[-2] << endl;      // 4
    // cout << *p2 << endl;         // 2

    // cout << arr << endl;        // 009DFBB8
    // cout << *arr << endl;       // 1【第1个元素值】
    // cout << arr + 1 << endl;    // 009DFBBC	后移4字节【跳过1个元素】
    // cout << *(arr + 1) << endl; // 2【第2个元素值】

    // cout << &arr[0] << endl;        // 009DFBB8
    // cout << *(&arr[0]) << endl;     // 1【第1个元素值】
    // cout << &arr[0] + 1 << endl;    // 009DFBBC	后移4字节【跳过1个元素】
    // cout << *(&arr[0] + 1) << endl; // 2【第2个元素值】

    // cout << &arr << endl;        // 009DFBB8
    // cout << *(&arr) << endl;     // 009DFBB8
    // cout << &arr + 1 << endl;    // 009DFBCC	后移4*5=20字节【跳过整个数组】
    // cout << *(&arr + 1) << endl; // 009DFBCC

    // // 冒泡排序
    // int arr4[5] = {1, 3, 5, 2, 4};
    // int len = sizeof(arr4) / sizeof(arr4[0]);
    // for (int i = 0; i < len - 1; i++)
    // {
    //     for (int j = 0; j < len - 1 - i; j++)
    //     {
    //         if (arr4[j] > arr4[j + 1])
    //         {
    //             int temp = arr4[j];
    //             arr4[j] = arr4[j + 1];
    //             arr4[j + 1] = temp;
    //         }
    //     }
    // }
    // cout << "After sort" << endl;
    // for (int i = 0; i < len; i++)
    // {
    //     cout << arr4[i] << endl;
    // }
    // return 0;

    // 二维数组
    // （1）数据类型 数组名[ 行数 ][ 列数 ];
    // （2）数据类型 数组名[ 行数 ][ 列数 ] = { {数据1，数据2} ，{数据3，数据4} };
    // （3）数据类型 数组名[ 行数 ][ 列数 ] = { 数据1，数据2，数据3，数据4};
    // （4）数据类型 数组名[ ][ 列数 ] = { 数据1，数据2，数据3，数据4};           //没有规定行数，可以省略行数
    //   已初始化数据，则可以省略行数
    // 二维数组占用内存空间大小：sizeof(arr)
    // 二维数组第 i 行占用内存空间大小：sizeof(arr[i])
    // 二维数组某个元素占用内存空间大小：sizeof(arr[i][j])
    // int arr2[2][3] = {{1, 2, 3}, {4, 5, 6}};

    // for (int i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++)
    // { // 计算行数
    //     for (int j = 0; j < sizeof(arr2[i]) / sizeof(arr2[i][0]); j++)
    //     { // 计算列数
    //         cout << arr2[i][j] << " ";
    //     }
    //     cout << endl; // 类似于换行符
    // }

    // // 二维数组首地址：arr[0] 或 &arr[0][0]
    // // 二维数组第1个元素的地址： arr[0] 或 &arr[0][0]
    // // 二维数组第 0 行的地址： arr或arr[0]或arr + 0 【或*(arr + 0)】
    // // 二维数组第 i 行的地址：arr[i]或arr + i 【或*(arr + i)或&a[0] + i】
    // // 二维数组第 i 行首元素的地址：arr[i]或arr + i或*(arr + i)或&a[0] + i
    // // 二维数组第 i 行第 j 列元素的地址：&arr[i][j]或*(arr + i) + j
    // //通过指针解引用访问或操作某元素：*(*(arr + i) + j)
    // //二维数组占用的内存空间
    // cout << "二维数组大小： " << sizeof(arr2) << endl;			    //24
    // cout << "二维数组一行大小： " << sizeof(arr2[0]) << endl;		//12
    // cout << "二维数组元素大小： " << sizeof(arr2[0][0]) << endl;	//3

    // //二维数组的行数与列数
    // cout << "二维数组行数： " << sizeof(arr2) / sizeof(arr2[0]) << endl;		//2
    // cout << "二维数组列数： " << sizeof(arr2[0]) / sizeof(arr2[0][0]) << endl;	//3

    // //地址
    // cout << "二维数组首行地址：" << arr2 << endl;
    // cout << "二维数组第一行地址：" << arr2[0] << endl;
    // cout << "二维数组第一个元素地址：" << &arr2[0][0] << endl;

    // cout << "二维数组第二行地址：" << arr2[1] << endl;
    // cout << "二维数组第二个元素内容：" << arr2[0][1] << endl;

    // //二维数组3行4列
    // int arr7[3][4] = {
    // 	{1,2,3,4},
    // 	{5,6,7,8},
    // 	{9,10,11,12}
    // };
    // cout << &arr7 << endl;			//00DAFB34	//整个二维数组的地址
    // cout << &arr7 + 1 << endl;		//00DAFB64	/后移4*3*4=48字节【跳过整个二维数组的全部12个元素】

    // cout << arr7 << endl;			//00DAFB34	//二维数组第0行的地址
    // cout << arr7 + 1 << endl;		//00DAFB44	后移4*4=16字节【跳过二维数组1行共4个元素】
    // cout << arr7[1] << endl;		//00DAFB44	后移4*4=16字节【跳过二维数组1行共4个元素】
    // cout << &arr7[0] + 1 << endl;	//00DAFB44	后移4*4=16字节【跳过二维数组1行共4个元素】

    // cout << *(arr7 + 1) << endl;		//00DAFB44	//二维数组第1行首元素的地址
    // cout << *(arr7 + 1) + 1 << endl;	//00DAFB48	后移4字节【跳过1个元素】

    // cout << arr7[0] << endl;			//00DAFB34	//二维数组首元素地址
    // cout << arr7[0] + 1 << endl;		//00DAFB38	后移4字节【跳过1个元素】

    // cout << &arr7[0][0] << endl;		//00DAFB34	//二维数组首元素地址
    // cout << &arr7[0][0] + 1 << endl;	//00DAFB38	后移4字节【跳过1个元素】

    // /* 数组指针，指向数组长度为4的int数组 */

    // //arr或&arr[0]：地址类型int(*)[4]
    // int (*p1)[4] = arr7+1;		//正确
    // int (*p2)[4] = &arr7[0];	//正确    选择行
    // int *ptr = arr7[0];	//正确
    // cout << "p1: " << *p1[0] << endl;
    // cout << "p2: " << *(ptr + 1) << endl;  //选择列
    // //&arr：地址类型int(*)[3][4]
    // int(*p)[3][4] = &arr7;	//正确
    // cout << "p: " << *p << endl;
    // return 0;

    // 动态数组
}