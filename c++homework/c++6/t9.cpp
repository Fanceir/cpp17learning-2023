//哥德巴赫猜想
#include <iostream>
using namespace std;
int f(int n)
{
    int i, j, k;
    for (i = 2; i <= n / 2; i++)
    {
        for (j = 2; j <= i; j++)
        {
            if (i % j == 0)
                break;
        }
        if (j == i)
        {
            for (k = 2; k <= n - i; k++)
            {
                if ((n - i) % k == 0)
                    break;
            }
            if (k == n - i)
                cout << n << "=" << i << "+" << n - i << endl;
        }
    }
    return 0;
}
int main()
{
    int n;
    cin >> n;
    f(n);
    return 0;
}