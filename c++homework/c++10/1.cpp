#include<iostream>
template<typename T>
void swap(T &a,T &b){
    T temp=a;
    a=b;
    b=temp;
}
int main(){
    int a=1,b=2;
    swap(a,b);
    std::cout<<a<<" "<<b<<std::endl;
    double c=1.1,d=2.2;
    swap(c,d);
    std::cout<<c<<" "<<d<<std::endl;
    std::string e="hello",f="world";
    swap(e,f);
    std::cout<<e<<" "<<f<<std::endl;
    return 0;
}