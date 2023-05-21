//快速排序算法
/*
    fanxu
    2023.3.30
*/
#include <bits/stdc++.h>
using namespace std;
int a[100];
void qsort(int a[], int l, int r)
{
    if (l >= r)
        return;
    int i = l, j = r, x = a[l];
    while (i < j)
    {
        while (i < j && a[j] >= x)
            j--;
        if (i < j)
            a[i++] = a[j];
        while (i < j && a[i] < x)
            i++;
        if (i < j)
            a[j--] = a[i];
    }
    a[i] = x;
    qsort(a, l, i - 1);
    qsort(a, i + 1, r);
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    qsort(a,0,n-1);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}