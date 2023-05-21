//输出下列程序的输出
#include<iostream>
int main(){

    int x = 10;
    int y = 20;
    x += y+=10;
    std::cout<<x<<" "<<y;
}//输出  40 30