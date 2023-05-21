#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//定义一个Date类表示日期，再定义一个Person类表示一个人的信息(姓名、出生日期、身高)。每种类型都要定义构造函数、拷贝构造函数以及输出自身信息的print()函数。
class Date
{
    int year{2000}, month{1}, day{1};
public:
    Date(int y, int m, int d) :year{y}, month {m}, day {d} {};
    Date(){}; //默认构造函数

    Date(const Date &d)
    {
        year = d.year;
        month = d.month;
        day = d.day;
    }
    void print()
    {
        cout << year << "-" << month << "-" << day << endl;
    }
};
class Person
{

    string name{"fdh"};
    Date birthday{2000,1,1};
    double height{0};
    public:
    Person(string n, Date d, double h)
    {
        name = n;
        birthday = d;
        height = h;
    }
    Person(){};
    //拷贝构造函数
    Person(const Person &p)
    {
        name = p.name;
        birthday = p.birthday;
        height = p.height;
    }
    void print()
    {
        cout << name << " ";
        birthday.print();
        cout << height << endl;
    }
};

int main()
{
   //动态内存分配根据输入的大小创建一组Person的动态数组空间，并演示如何用指针、下标读写数组元素。
    int n;
    cin >> n;
    Person *p = new Person[n];
    for (int i = 0; i < n; i++)
    {
        p[i] = Person("fdh", Date(2000, 1, 1), 1.8);
    }
    for (int i = 0; i < n; i++)
    {
        p[i].print();
    }
    for (int i = 0; i < n; i++)
    {
        (p + i)->print();
    }
    delete[] p;
    //演示拷贝构造函数的调用
    Person p1("fdh", Date(2000, 1, 1), 1.8);
    Person p2(p1);
    p2.print();
    return 0;
    
}