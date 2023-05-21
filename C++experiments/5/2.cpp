#include <bits/stdc++.h>
using namespace std;
// floyd
int mp[1005][1005];
int vis[1005];
int n, m;
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            mp[i][j] = 0x3f3f3f3f;//初始化
    for (int i = 1; i <= n; i++)
        mp[i][i] = 0;//自己到自己的距离为0
    for (int i = 1; i <= m; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;
        mp[x][y] = z;//存图
    }
    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                mp[i][j] = min(mp[i][j], mp[i][k] + mp[k][j]);//floyd
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << mp[i][j] << " ";
        }
        cout << "\n";//输出
    }
    return 0;
}