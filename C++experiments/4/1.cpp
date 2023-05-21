/*
    fanxu
    2023.3.15
*/
#include <bits/stdc++.h>
//学生成绩管理系统
int main()
{
    int n;
    int cols;
    std::cin >> n;
    auto scores{new double[n][4]};//动态分配内存
    auto names{new char[n][50]};//动态分配内存
    std::cout << "输入姓名，平时成绩，实验成绩，期末成绩和总评成绩" << std::endl;
    for (int i = 0; i != n; i++)
    {
        std::cin >> names[i];
        std::cin >> scores[i][0] >> scores[i][1] >> scores[i][2] >> scores[i][3];
    }//输入数据
    for (int i = 0; i != n; i++)
    {

        std::cout << names[i] << "\t" << scores[i][0] << "\t" << scores[i][1] << "\t" << scores[i][2] << "\t" << scores[i][3] << "\n";
    }
    system("pause");
    return 0;
}