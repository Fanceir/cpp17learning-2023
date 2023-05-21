// 写出一个计算n的阶乘的函数
#include <iostream>
using namespace std;
int f(int n)
{
    int i = 1;
    for (int j = 1; j <= n; j++)
        i *= j;

    return i;
}
int main()
{
    int x;
    cin >> x;
    cout << f(x) << endl;
    return 0;
}
