// 编写一个函数，当它第一次调用时返回1，第二次调用时返回2，第三次调用时返回3，以此类推。
// 编写一个程序，测试该函数，显示前个返回值。
#include <iostream>
using namespace std;
int f(int n)
{
    static int i = 0;
    i++;
    return i;
}
int main()
{
    int i;
    int n;

    cin >> n;
    for (i = 0; i < n; i++)
        cout << f(i) << endl;
    return 0;
}