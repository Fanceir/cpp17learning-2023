//下面程序的输出是什么
#include <iostream>
int main()
{
    int a=0;
    decltype(a) b=a;
    b++;
    std::cout<<a<<"\t"<<b<<std::endl;
    return 0;

}//0     1