// 下列代码的输出是什么
#include <iostream>
using namespace std;
int main()
{
    int i, &ri = i;
    i = 5;
    ri = 10;
    cout << i << " " << ri << endl;
    return 0;
}//10 10