//编写程序输出一个乘法口诀表
#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << "*" << i << "=" << i * j << " ";
        }
        cout << endl;
    }
    return 0;
}