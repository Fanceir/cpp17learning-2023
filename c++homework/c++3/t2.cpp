// 输入一个正整数，要求输出的数字是逆序的正整数
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n != 0)
    {
        cout << n % 10;
        n = n / 10;
    }
    return 0;
}