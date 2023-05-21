//从键盘输入一个正整数n，求1到n的所有阶乘之和
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j <= i; j++)
        {
            a *= j;
        }
        sum += a;
    }
    cout << sum << endl;
    return 0;
}