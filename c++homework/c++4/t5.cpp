//编写一个程序，从键盘输入一个人的身高和体重，判断他是否肥胖的判断结果，肥胖的标准是体重除以身高的平方大于25.0。
#include<iostream>
using namespace std;
int main()
{
    double height, weight;
    cin >> height >> weight;
    if (weight / (height * height) > 25.0)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
    return 0;
}