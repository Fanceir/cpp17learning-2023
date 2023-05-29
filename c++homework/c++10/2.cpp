// 下列的函数可以实现一个字符串是否为一个float类型的实数，请将它修改为模板

/*#include<sstream>
using namespace std;
bool isFloat(string s){
   istringstream iss(s);
   float dummy;
   iss>>noskipws>>dummy;
   return iss && iss.eof();
}*/
#include<iostream>
#include<sstream>
template<typename T>
bool isFloat(T s){
   std::istringstream iss(s);
   float dummy;
   iss>>std::noskipws>>dummy;
   return iss && iss.eof();
}
int main(){
      std::cout<<isFloat("1.1")<<std::endl;
      std::cout<<isFloat("1")<<std::endl;
      std::cout<<isFloat("1.1.1")<<std::endl;
      std::cout<<isFloat("1.1a")<<std::endl;
      std::cout<<isFloat("a")<<std::endl;
      return 0;
}