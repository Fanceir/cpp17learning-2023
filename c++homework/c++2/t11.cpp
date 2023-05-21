// 修改下列代码的语法错误，运行修改后的程序，体会变量的不同初始化方式
#include <iostream>
using namespace std;
int main()
{
    double d;
    double d1{3.5};
    double d2 = {3.5};
    double d3 = 3.5;
    double d4{3.5};
    int i;
    int i1 = 3.5; // error
    int i2 = 3.5; // error
    int i3 = 3.5;
    int i4 = 3.5; // error
    cout << d << "\t" << d1 << "\t" << d2 << "\t" << d3 << "\t" << d4 << endl;
    cout << i << "\t" << i1 << "\t" << i2 << "\t" << i3 << "\t" << i4 << endl;
    auto a = 3.5;
    auto a1 = 3.5;
    auto a2 = i2 + d2 / 2;
    cout << a << "\t" << a1 << "\t" << a2 << endl;
}