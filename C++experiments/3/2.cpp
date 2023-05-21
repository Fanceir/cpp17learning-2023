#include <bits/stdc++.h>
using namespace std;
int num, x;
int chance = 8;
bool judge(int x)
{
    if (x == num)
        return 1;
    else
        return 0;
}
int main()
{
    cout << "guess the number between 1 and 100,you have 8 chances" << endl;
    srand(time(NULL));//随机数种子
    num = (rand() % (100) + 1);

    while (chance--)
    {
        int x;
        cin >> x;
        if (judge(x))
        {
            cout << "yes" << endl;
            break;
        }
        else
            cout << "no, continue,you have " << chance << " chances" << endl;
    }
    cout << "The right number is " << num << endl;
    system("pause");
    return 0;
}