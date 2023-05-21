#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Student {
public:
    string name;  
    string id;     
    double dailyGrade; 
    double labGrade;
    double finalExamGrade;  
    double totalGrade;   
    Student(string n, string i, double d, double l, double f)
    {
        name = n;
        id = i;
        dailyGrade = d;
        labGrade = l;
        finalExamGrade = f;
        totalGrade = d * dailyWeight + l * labWeight + f * finalExamWeight;
    }
    static void setWeights(double daily, double lab, double finalExam)
    {
        dailyWeight = daily;
        labWeight = lab;
        finalExamWeight = finalExam;
    }
    static void updateStats(double grade)
    {
        if (grade < 60)
            failCount++;
        else if (grade <= 70)
            passCount++;
        else if (grade <= 80)
            mediumCount++;
        else if (grade <= 90)
            goodCount++;
        else
            excellentCount++;
    }
    static string getLevel(double grade)
    {
        if (grade < 60)
            return "不及格";
        else if (grade <= 70)
            return "及格";
        else if (grade <= 80)
            return "中等";
        else if (grade <= 90)
            return "良好";
        else
            return "优秀";
    }
    static void printStats()
    {
        int totalCount = failCount + passCount + mediumCount + goodCount + excellentCount;
        cout << "不及格人数：" << failCount << "，占比：" << failCount * 100.0 / totalCount << "%" << endl;
        cout << "及格人数：" << passCount << "，占比：" << passCount * 100.0 / totalCount << "%" << endl;
        cout << "中等人数：" << mediumCount << "，占比：" << mediumCount * 100.0 / totalCount << "%" << endl;
        cout << "良好人数：" << goodCount << "，占比：" << goodCount * 100.0 / totalCount << "%" << endl;
        cout << "优秀人数：" << excellentCount << "，占比：" << excellentCount * 100.0 / totalCount << "%" << endl;
    }
private:
    static double dailyWeight;  
    static double labWeight;  
    static double finalExamWeight;  
    static int failCount; 
    static int passCount;      
    static int mediumCount; 
    static int goodCount;  
    static int excellentCount;  
};