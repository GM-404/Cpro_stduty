#include <iostream>

using namespace std;

#define LOG(x) cout << x << endl;
void Increment(int &value) // 这里的value是引用,其实还是对a进行操作
{
    value++;
}
int main()
{
    int a = 10;
    int &ref = a; // ref是a的引用
    ref = 20;
    LOG(a);

    Increment(a);
    LOG(a);
    return 0;
}