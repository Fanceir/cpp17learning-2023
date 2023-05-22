#include<iostream>
struct A{int a;};
struct B:virtual A{int b;};
struct C:virtual A{int c;};
struct D:B,C{int d;};
int main(){
    std::cout<<sizeof(A)<<std::endl;
    std::cout<<sizeof(B)<<std::endl;
    std::cout<<sizeof(C)<<std::endl;
    std::cout<<sizeof(D)<<std::endl;
    
    return 0;
}