#include <bits/stdc++.h>
using namespace std;
// bubble sort
int main()
{
    int a[1000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i]; // 输入
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        { // 冒泡排序
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    system("pause");
    return 0;
}