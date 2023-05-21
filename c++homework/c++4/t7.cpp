// 输出一行字符，分别统计其中英文字母、空格、数字和其它字符的个数。
#include <iostream>
using namespace std;
int main()
{
    char c;
    int letter = 0, space = 0, digit = 0, other = 0;
    while ((c = cin.get()) != '\n')
    {
        if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
            letter++;
        else if (c == ' ')
            space++;
        else if (c >= '0' && c <= '9')
            digit++;
        else
            other++;
    }
    cout << letter << endl
         << space << endl
         << digit << endl
         << other << endl;

    return 0;
}