#include <iostream>
#include <string>

using namespace std;

class Time
{
    int hour, minute, second;

public:
    Time(int h, int m, int s);
    Time(const char *str);
    void gettime();
    void puttime();
    void addTime(Time t1, Time t2);
    int secends();
};
void Time::gettime()
{
    cout << "请输入时间（时 分 秒）：";
    cin >> hour >> minute >> second;
}
void Time::puttime()
{
    cout << hour << ":" << minute << ":" << second << endl;
}
void Time::addTime(Time t1, Time t2)
{
    int h, m, s;
    s = t1.second + t2.second;
    m = t1.minute + t2.minute + s / 60;
    h = t1.hour + t2.hour + m / 60;
    s %= 60;
    m %= 60;
    h %= 24;
    cout << "两个时间之和为：" << h << ":" << m << ":" << s << endl;
}
int Time::secends()
{
    return hour * 3600 + minute * 60 + second;
}
Time::Time(int h, int m, int s)
{
    hour = h;
    minute = m;
    second = s;
}
Time::Time(const char *str)
{
    int h, m, s;
    sscanf(str, "%d:%d:%d", &h, &m, &s);
    hour = h;
    minute = m;
    second = s;
}
int main()
{
    Time t1(12, 30, 30), t2(13, 30, 30), t3(0, 0, 0);
    t1.puttime();
    t2.puttime();
    t3.addTime(t1, t2);
    cout << "t1的秒数为：" << t1.secends() << endl;
    cout << "t2的秒数为：" << t2.secends() << endl;
    cout << "t3的秒数为：" << t3.secends() << endl;
    return 0;
}