#include <bits/stdc++.h>
using namespace std;
int n;
vector<vector<int>> a;//二维数组
vector<int> b;
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        b.clear();
        for (int j = 0; j <= i; j++)
        {
            if (j == 0)
                b.push_back(1);
            else if (j == i)
                b.push_back(1);
            else
                b.push_back(a[i - 1][j - 1] + a[i - 1][j]);
        }
        a.push_back(b);
    }//杨辉三角

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
            cout << a[i][j] << " ";
        cout << "\n";
    }
    system("pause");
    return 0;
}