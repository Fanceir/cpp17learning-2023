//下列程序的输出是什么
#include <iostream>
class B{
    public:
    void print (){
        std::cout<<"print in B\n";

    }
    virtual void hello (){
        std::cout<<"hello in B\n";
    }
};
class D:public B{
    public:
    void print(){
        std::cout<<"print in D\n";
    }
    void hello(){
        std::cout<<"hello in D\n";
    }
};
int main(){


    B b;
    D d;
    b.print();
    d.print();
    b.hello();
    d.hello();
    B *bp=&b;
    bp->print();
    bp->hello();
    bp=&d;
    bp->print();
    bp->hello();
    D *dp=&d;
    dp->print();
    dp->hello();
    dp=static_cast<D*>(&b);//强制类型转换
    dp->print();
    dp->hello();
    return 0;
}
//输出结果
/*
print in B
print in D
hello in B
hello in D
print in B
hello in B
print in B
hello in D
print in D
hello in D
print in D
hello in B
*/