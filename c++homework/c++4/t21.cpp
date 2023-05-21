//约瑟夫环问题，n个人围成一圈，从第一个人开始报数，报到m的人出列输出剩下的人
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[100];
    for (int i = 0; i < n; i++)
    {
        a[i] = i + 1;
    }
    int i = 0, j = 0;
    while (j < n - 1)
    {
        if (a[i] != 0)
        {
            i++;
            if (i == n)
                i = 0;
            if (a[i] != 0)
            {
                m--;
                if (m == 0)
                {
                    a[i] = 0;
                    m = 1;
                    j++;
                }
            }
        }
        else
        {
            i++;
            if (i == n)
                i = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
            cout << a[i] << endl;
    }
    return 0;
}