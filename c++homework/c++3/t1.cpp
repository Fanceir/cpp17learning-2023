// 编写程序，输入医院二次方程a,b,c的系数，求解方程的根，输出结果。
#include <cmath>
#include <cstdio>
#include <iostream>

int main()
{
    double a, b, c;
    std::cin >> a >> b >> c;
    double delta = b * b - 4 * a * c;
    if (delta < 0)
    {
        std::cout << "No real root" << std::endl;
    }
    else if (delta == 0)
    {
        std::cout << "x1=x2=" << -b / (2 * a) << std::endl;
    }
    else
    {
        std::cout << "x1=" << (-b + sqrt(delta)) / (2 * a) << std::endl;
        std::cout << "x2=" << (-b - sqrt(delta)) / (2 * a) << std::endl;
    }

    return 0;
}