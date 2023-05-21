//编写一个程序从键盘输入一个年份，判断该年份是否为闰年，如果是闰年则输出“yes”，否则输出“no”。
#include <iostream>
using namespace std;
int main()
{
    int year;
    cin >> year;
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
    return 0;
}