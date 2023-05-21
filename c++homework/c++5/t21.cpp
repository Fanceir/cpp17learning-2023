//编写程序，从键盘输入10个整数到一个数组中，并将数组中的元素逆序放入另一个数组中，并输出
#include<iostream>
using namespace std;
int main()
{
    int a[10];
    int b[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 10; i++)
    {
        b[i] = a[9 - i];
    }
    for (int i = 0; i < 10; i++)
    {
        cout << b[i] << " ";
    }
    return 0;
}