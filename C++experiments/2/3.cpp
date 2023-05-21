#include <bits/stdc++.h>
using namespace std;
int x, a;
int n;
int fx(int n)
{
    int x = 0;
    while (n != 0)
    {
        a = n % 10;
        x = x * 10 + a;
        n = n / 10;
    }
    return x;
}
bool judge(int a, int b)
{
    if (a == b)
        return 1;
    else
        return 0;
}
int main()
{
    cin >> n;
    int da = fx(n);
    if (judge(da, n))
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    system("pause");
    return 0;
}