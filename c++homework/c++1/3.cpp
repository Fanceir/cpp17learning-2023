#include <iostream>
int main()
{
    std::cout << "please input 2 numbers" << std::endl;
    int a, b;
    std::cin >> a >> b;
    std::cout << "a+b=" << a + b << std::endl;
    std::cout << "a*b=" << a * b << std::endl;
    std::cout << "a/b=" << (double)a / b << std::endl;
    std::cout << "a-b=" << a - b << std::endl;
    return 0;
}