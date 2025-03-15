#include <iostream>
#include "LOG.hh"
using namespace std;

static int s_Level = 1;
static int s_Speed = 0;
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

    // 三元操作符
    s_Speed = s_Level >= 1 ? s_Level >= 2 ? s_Level >= 3 ? s_Level >= 4 ? 4 : 3 : 2 : 1 : 0;
    LOG(s_Speed);
    return 0;
}