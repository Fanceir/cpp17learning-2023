//用C++的类表示顺序表这一个数据结构（数据类型），存储元素的数目可以动态变化，具有插入、删除、修改、查询等基本操作
#include <iostream>
#include <string>
#include<vector>
using namespace std;
using ElemType=char;
class Vector{
    ElemType *data{nullptr};
    int capacity{0},n{0};
    public:
    Vector(const int cap=5)
    {
        capacity=cap;
        data=new ElemType[capacity];
    }
    bool insert (const int k,const ElemType &e);
    bool erase (const int k);
    bool push_back(const ElemType &e);
    bool pop_back();
    bool pop_front(const ElemType &e);
    bool insert_front (const ElemType &e);
    bool get(const int k,ElemType &e)const;
    bool set(const int k,const ElemType &e);
    int size()const{return n;}
    private:
    bool add_capacity();

};
bool Vector::pop_front(const ElemType &e)//pop_front函数的实现,删除第一个元素
{
    if(n==0)return false;
    for(int i=0;i<n-1;i++)
    {
        data[i]=data[i+1];
    }
    n--;
    return true;
}
bool Vector::insert_front(const ElemType &e)
{
    if(n==capacity)
    {
        if(!add_capacity())return false;
    }
    for(int i=n;i>0;i--)
    {
        data[i]=data[i-1];
    }
    data[0]=e;
    n++;
    return true;
}
bool Vector::add_capacity()
{
    ElemType *temp=new ElemType[capacity*2];
    if(!temp)return false;
    for(int i=0;i<n;i++)
    {
        temp[i]=data[i];
    }
    delete []data;
    data=temp;
    capacity*=2;
    return true;
}
bool Vector::insert(const int k,const ElemType &e)
{
    if(k<0||k>n)return false;
    if(n==capacity)
    {
        if(!add_capacity())return false;
    }
    for(int i=n;i>k;i--)
    {
        data[i]=data[i-1];
    }
    data[k]=e;
    n++;
    return true;
}

bool Vector::erase(const int k)
{
    if(k<0||k>=n)return false;
    for(int i=k;i<n-1;i++)
    {
        data[i]=data[i+1];
    }
    n--;
    return true;
}
bool Vector::push_back(const ElemType &e)
{
    if(n==capacity)
    {
        if(!add_capacity())return false;
    }
    data[n]=e;
    n++;
    return true;
}
bool Vector::pop_back()
{
    if(n==0)return false;
    n--;
    return true;
}
bool Vector::get(const int k,ElemType &e)const
{
    if(k<0||k>=n)return false;
    e=data[k];
    return true;
}
bool Vector::set(const int k,const ElemType &e)
{
    if(k<0||k>=n)return false;
    data[k]=e;
    return true;
}
void print(const Vector &v)
{
    ElemType e;
    for(auto i=0;i<v.size();i++)
    {
        v.get(i,e);
        cout<<e<<"\t";

    }
    cout<<endl;
}
int main(){
    Vector v(5);
    v.push_back('a');
    v.push_back('b');
    v.push_back('c');
    v.push_back('d');
    v.push_back('e');
    v.insert(2,'f');
    print(v);
    ElemType e;
    v.get(2,e);
    cout<<e<<endl;
    v.set(2,'g');
    v.get(2,e);
    cout<<e<<endl;
    v.erase(2);
    print(v);
    v.pop_back();
    print(v);
    return 0;
}

