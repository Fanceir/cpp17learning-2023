#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926
int op;
void cube()//正方体的体积
{
    int side;
    cin >> side;
    long long int s;
    s = side * side * side;
    cout << side << endl;
}
void sphere()//球体的体积
{
    int radius;
    cin >> radius;
    double s;
    s = (4 / 3.0) * pi * radius * radius * radius;
    cout << s << endl;
}
void cone()//圆锥的体积
{
    int radius, height;
    cin >> radius >> height;
    double s;
    s = pi * radius * (height / 3.0);
    cout << s << endl;
}
int main()
{
    cout << "1:cube  2:sphere  3:cone" << endl;//选择体积
    cin >> op;
    if (op == 1)    //正方体
    {
        cout << "input side" << endl;
        cube();
    }
    else if (op == 2)//球体
    {
        cout << "input radius" << endl;
        sphere();
    }
    else if (op == 3)//圆锥
    {
        cout << "input radius,height" << endl;
        cone();
    }
    else
        cout << "error" << endl;
    system("pause");
    return 0;
}
