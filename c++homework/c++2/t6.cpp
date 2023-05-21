//完善下面的程序，根据输入字符串的值设置相应的Color类型的变量的值
#include<iostream>
#include<string>
using namespace std;
enum class Color{red,green,blue};
int main(){
    string str;
    cin>>str;
    Color c;
    if(str=="red"){
        c=Color::red;
    }
    else if(str=="green"){
        c=Color::green;
    }
    else if(str=="blue"){
        c=Color::blue;
    }
    else{
        cout<<"error"<<endl;
    }
    return 0;
}