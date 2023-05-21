// 编写一个程序，输出100以内的所有素数
#include <iostream>
using namespace std;
int main()
{

    int i, j;
    for (i = 2; i <= 100; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
                break;
        }
        if (j == i)
            cout << i << " ";
    }
    return 0;
}