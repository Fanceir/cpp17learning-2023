//从键盘输入一个整数用遍历的方法求出最大值最小值
#include <iostream>
using namespace std;
int main()
{
    int a[10];
    int max = 0, min = 0;
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 10; i++)
    {
        if (a[i] > a[max])
            max = i;
        if (a[i] < a[min])
            min = i;
    }
    cout << "max=" << a[max] << endl;
    cout << "min=" << a[min] << endl;
    return 0;
}