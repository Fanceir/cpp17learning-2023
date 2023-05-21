//设计一个函数，输入小写字母，返回对应的大写字母，如果输入的不是小写字母，则返回原字符。
#include <iostream>
using namespace std;
char f(char c)
{
    if (c >= 'a' && c <= 'z')
        return c - 32;
    else
        return c;
}
int main()
{
    char c;
    cin >> c;
    cout << f(c) << endl;
    return 0;
}
