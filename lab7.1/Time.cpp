#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct Time
{
    int hours;
    int minutes;
    int seconds;
};

Time InputTime()
{
    Time t;
    cout << "Enter hour: ";
    cin >> t.hours;
    while (t.hours > 23 || t.hours < 0)
    {
        cout << "Error, enter hour again:  ";
        cin >> t.hours;
        continue;
    }
    // Ввод минут
    cout << "Enter minute: ";
    cin >> t.minutes;
    while (t.minutes > 59 || t.minutes < 0)
    {
        cout << "Error, enter minute again:  ";
        cin >> t.minutes;
        continue;
    }
    // Ввод секунд
    cout << "Enter second: ";
    cin >> t.seconds;
    while (t.seconds > 59 || t.seconds < 0)
    {
        cout << "Error, enter second again:  ";
        cin >> t.seconds;
        continue;
    }
    return t;
}

void TimeToSeconds(Time t)
{
    int seconds = t.hours * 3600 + t.minutes * 60 + t.seconds;
    cout << t.hours << "\':" << t.minutes << "\':" << t.seconds << " - в секудах равно: " << seconds << endl;
}

Time IntervalMinus(Time t1, Time t2)
{
    Time t;
    t.hours = abs(t1.hours - t2.hours);
    t.minutes = abs(t1.minutes - t2.minutes);
    t.seconds = abs(t1.seconds - t2.seconds);
    if (t1.minutes < t2.minutes)
    {
        t.hours -= 1;
        t.minutes = 60 - t.minutes;
    }
    if (t1.seconds < t2.seconds) 
    {
        t.minutes -= 1;
        t.seconds = 60 - t.seconds;
    } 
    return t;
}

Time IntervalPlus(Time t1, Time t2)
{
    Time t;
    t.hours = t1.hours + t2.hours;
    t.minutes = t1.minutes + t2.minutes;
    t.seconds = t1.seconds + t2.seconds;
    if ((t1.hours + t2.hours) > 23) t.hours -= 24;
    if (t1.minutes + t2.minutes >= 60)
    {
        t.hours += 1;
        t.minutes -= 60;
    }
    if (t1.seconds + t2.seconds >= 60)
    {
        t.minutes += 1;
        t.seconds -= 60;
    }

    return t;
}

int main()
{
    system("chcp 1251");

    Time t1 = InputTime();

    Time t2 = InputTime();

    Time t = IntervalPlus(t1, t2);

    TimeToSeconds(t);

    t = IntervalMinus(t1, t2);

    TimeToSeconds(t);
}
