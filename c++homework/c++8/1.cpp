#include<iostream>
#include<algorithm>
#include<cstring>
//为第七章的字符串类string添加下表运算符operator[]（替换原来的get_char和set_char函数）和输入输出运算符operator>>和operator<<。
class string{
    private:
        char *str;
        int len;
    public:
        string();
        string(const char *s);
        string(const string &s);
        ~string();
        int length() const;
        string &operator=(const string &s);
        string &operator=(const char *s);
        char &operator[](int i);
        const char &operator[](int i) const;
        friend bool operator<(const string &s1,const string &s2);
        friend bool operator>(const string &s1,const string &s2);
        friend bool operator==(const string &s1,const string &s2);
        friend std::ostream &operator<<(std::ostream &os,const string &s);
        friend std::istream &operator>>(std::istream &is,string &s);
};
string::string(){
    len=0;
    str=new char[1];
    str[0]='\0';
}
string::string(const char *s){
    len=strlen(s);
    str=new char[len+1];
    strcpy(str,s);
}
string::string(const string &s){
    len=s.len;
    str=new char[len+1];
    strcpy(str,s.str);
}
string::~string(){
    delete []str;
}
int string::length() const{
    return len;
}
string &string::operator=(const string &s){
    if(this==&s)
        return *this;
    delete []str;
    len=s.len;
    str=new char[len+1];
    strcpy(str,s.str);
    return *this;
}
string &string::operator=(const char *s){
    delete []str;
    len=strlen(s);
    str=new char[len+1];
    strcpy(str,s);
    return *this;
}
char &string::operator[](int i){
    return str[i];
}
const char &string::operator[](int i) const{
    return str[i];
}
bool operator<(const string &s1,const string &s2){
    return strcmp(s1.str,s2.str)<0;
}
bool operator>(const string &s1,const string &s2){
    return strcmp(s1.str,s2.str)>0;
}
bool operator==(const string &s1,const string &s2){
    return strcmp(s1.str,s2.str)==0;
}
std::ostream &operator<<(std::ostream &os,const string &s){
    os<<s.str;
    return os;
}
int main(){
    string s1("hello");
    string s2("world");
    string s3;
    s3=s1;
    std::cout<<s3<<std::endl;
    s3="hello";
    std::cout<<s3<<std::endl;
    std::cout<<s1[1]<<std::endl;
    s1[1]='a';
    std::cout<<s1<<std::endl;
    return 0;
}
