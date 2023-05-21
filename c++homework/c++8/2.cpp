//为下面的类X添加自增和自减，比较运算符
#include <iostream>
#include <algorithm>
#include <cstring>
class X{
    int x;
    public :
        X(int x=0):x(x){}
        X &operator++();
        X operator++(int);
        X &operator--();
        X operator--(int);
        friend bool operator<(const X &x1,const X &x2);
        friend bool operator>(const X &x1,const X &x2);
        friend bool operator==(const X &x1,const X &x2);
        friend std::ostream &operator<<(std::ostream &os,const X &x);
        friend std::istream &operator>>(std::istream &is,X &x);
};
X &X::operator++(){
    x++;
    return *this;
}
X X::operator++(int){
    X tmp=*this;
    x++;
    return tmp;
}
X &X::operator--(){
    x--;
    return *this;
}
X X::operator--(int){
    X tmp=*this;
    x--;
    return tmp;
}
bool operator<(const X &x1,const X &x2){
    return x1.x<x2.x;
}
bool operator>(const X &x1,const X &x2){
    return x1.x>x2.x;
}
bool operator==(const X &x1,const X &x2){
    return x1.x==x2.x;
}
std::ostream &operator<<(std::ostream &os,const X &x){
    os<<x.x;
    return os;
}
std::istream &operator>>(std::istream &is,X &x){
    is>>x.x;
    return is;
}
int main(){
    X x1(1),x2(2);
    std::cout<<x1<<std::endl;
    std::cout<<x2<<std::endl;
    std::cout<<(x1<x2)<<std::endl;
    std::cout<<(x1>x2)<<std::endl;
    std::cout<<(x1==x2)<<std::endl;
    std::cout<<(x1++)<<std::endl;
    std::cout<<(++x1)<<std::endl;
    std::cout<<(x1--)<<std::endl;
    std::cout<<(--x1)<<std::endl;
  return 0;
}