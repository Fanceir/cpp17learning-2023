//下列程序的输出结果
#include <iostream>
class A{
    public:
    A(){
        std::cout<<"A ";
    }
    A (const A &){
        std::cout<<"a";

    }
};
class B:public virtual A{
    public:
    B(){
        std::cout<<"B ";
    }
    B (const B &){
        std::cout<<"b";

    }
};
class C:public virtual A{
    public:
    C(){
        std::cout<<"C ";
    }
    C (const C &){
        std::cout<<"c";

    }
};
class D:B,C{
    public:
    D(){
        std::cout<<"D ";
    }
    D (const D &){
        std::cout<<"d";

    }
};
int main(){
    D d1;
    D d2(d1);
    return 0;
}
//
// A B C D D d