// 输入一个正整数判断其是否是回文数，如果是则输出YES，否则输出NO。
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int m = n;
    int sum = 0;
    while (n != 0)
    {
        sum = sum * 10 + n % 10;
        n = n / 10;
    }
    if (sum == m)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}