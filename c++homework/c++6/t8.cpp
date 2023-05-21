//冒泡排序的函数表达，并测试
#include <iostream>
using namespace std;
void f(int *a, int n)
{
    int i, j, t;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
}
int main()
{
    int a[10] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 0};
    f(a, 10);
    for (int i = 0; i < 10; i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}