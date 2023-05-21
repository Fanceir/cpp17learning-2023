// 编写一个程序按照类似以下的格式，输出你的操作系统中各种常用类型的大小。
#include <iostream>
using namespace std;
int main()
{

    cout << "bool:" << sizeof(bool) << endl;
    cout << "char:" << sizeof(char) << endl;
    cout << "short:" << sizeof(short) << endl;
    cout << "int:" << sizeof(int) << endl;
    cout << "long:" << sizeof(long) << endl;
    cout << "long long:" << sizeof(long long) << endl;
    cout << "float:" << sizeof(float) << endl;
    cout << "double:" << sizeof(double) << endl;
    cout << "long double:" << sizeof(long double) << endl;
    return 0;
}