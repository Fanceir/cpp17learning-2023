#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int x = (n - i) * 2;
        for (int j = 1; j <= x; j++)
            cout << " ";
        for (int o = 1; o <= i; o++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    system("pause");
    return 0;
}