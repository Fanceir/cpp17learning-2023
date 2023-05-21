//实现一个表示复数的类complex，尽可能使用运算符重载定义对复数的加、减、乘、除，共轭运算
#include <iostream>
#include <algorithm>
#include <cstring>
class complex{
    double real;
    double imag;
    public :
        complex(double real=0,double imag=0):real(real),imag(imag){}
        complex operator+(const complex &c);
        complex operator-(const complex &c);
        complex operator*(const complex &c);
        complex operator/(const complex &c);
        complex operator~();
        friend std::ostream &operator<<(std::ostream &os,const complex &c);
        friend std::istream &operator>>(std::istream &is,complex &c);
};
complex complex::operator+(const complex &c){
    return complex(real+c.real,imag+c.imag);
}
complex complex::operator-(const complex &c){
    return complex(real-c.real,imag-c.imag);
}
complex complex::operator*(const complex &c){
    return complex(real*c.real-imag*c.imag,real*c.imag+imag*c.real);
}
complex complex::operator/(const complex &c){
    return complex((real*c.real+imag*c.imag)/(c.real*c.real+c.imag*c.imag),(imag*c.real-real*c.imag)/(c.real*c.real+c.imag*c.imag));
}
complex complex::operator~(){
    return complex(real,-imag);
}
std::ostream &operator<<(std::ostream &os,const complex &c){
    os<<c.real<<"+"<<c.imag<<"i";
    return os;
}
std::istream &operator>>(std::istream &is,complex &c){
    is>>c.real>>c.imag;
    return is;
}
int main(){
    complex c1(1,2),c2(3,4);
    std::cout<<c1<<std::endl;
    std::cout<<c2<<std::endl;
    std::cout<<c1+c2<<std::endl;
    std::cout<<c1-c2<<std::endl;
    std::cout<<c1*c2<<std::endl;
    std::cout<<c1/c2<<std::endl;
    std::cout<<~c1<<std::endl;
    std::cout<<~c2<<std::endl;
    return 0;
}
