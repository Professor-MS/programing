#include <iostream>
using namespace std;
class Time
{
private:
    int hours;
    int minutes;

public:
    Time()
    {
        hours = 0;
        minutes = 0;
    }
    Time(int h, int m)
    {
        hours = h;
        minutes = m;
    }
    void DisplayTime()
    {
        cout << "H: " << hours << " M: " << minutes << endl;
    }
    Time operator++()
    {
        ++minutes;
        if (minutes >= 60)
        {
            ++hours;
            minutes -= 60;
        }

        return Time(hours, minutes);
    }
    Time operator++(int)
    {
        Time T(hours, minutes);
        ++minutes;

        if (minutes >= 60)
        {
            ++hours;
            minutes -= 60;
        }

        return T;
    }
};

int main()
{
    // Time T1(12, 59); // Going to hours 13
    // ++T1;
    // T1.DisplayTime();
    Time T2(11, 59), T3(10, 30);
    ++T2;
    T2.DisplayTime();
    ++T2;
    T2.DisplayTime();
    ++T3;
    T3.DisplayTime();
    ++T3;
    T3.DisplayTime();

    return 0;
}