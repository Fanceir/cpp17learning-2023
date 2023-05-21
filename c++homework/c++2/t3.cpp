// 编译下面的程序看看有什么编译错误
/*
#include<iostream>
#include<string>
    int main(){
        std::string s="hello",s2="world";
        std::cout<<s*s2;
        std::cout<<3*s;
    }

*/
#include <iostream>
#include <cstring> //应该是cstring
int main()
{
    std::string s = "hello", s2 = "world";
    std::cout << s + s2; // 这里应该是s+s2
    std::cout << "\n";
    std::cout << s + s + s; // 这里应该是3*s
    return 0;
}
