#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    double de;
    double x1, x2;
    de = b * b - 4 * a * c;
    if (de < 0) // 判断是否有解
    {
        cout << "flase";
    }
    else
    {
        x1 = (-b + sqrt(de)) / (a * 2);
        x2 = (-b - sqrt(de)) / (a * 2); // 求解
        if (de == 0)
        { // 判断是否有重根

            cout << "x1=x2=" << x1;
        }
        else if (de > 0)
        {// 判断是否有两个不同的实根

            cout << "x1=" << x1 << "\n"
                 << "x2=" << x2;
        }
    }
    system("pause");
    return 0;
}