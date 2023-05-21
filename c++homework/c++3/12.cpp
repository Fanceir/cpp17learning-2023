// 编写程序，输出下面3个值 -10，-10>>1,-10>2的二进制表示
#include <iostream>
using namespace std;
int main()
{
    int a = -10;
    cout << a << endl;
    cout << (a >> 1 )<< endl;
    cout << (a > 2) << endl;
    return 0;
}