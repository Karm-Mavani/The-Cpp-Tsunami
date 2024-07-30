#include <iostream>
using namespace std;

class Time
{
public:
    int  sec, hour = 0, min = 0;
};

int main()
{
    Time t1;
    cout << "Enter seconds : ";
    cin >> t1.sec;

    for (; t1.sec >= 60;)
    {
        t1.sec = t1.sec - 60;
        t1.min = t1.min + 1;
    }

    for (; t1.min >= 60;)
    {
        t1.min = t1.min - 60;
        t1.hour = t1.hour + 1;
    }

    cout << endl
         << t1.hour << ":" << t1.min << ":" << t1.sec << endl;

    cout << "Enter hours  :";
    cin >> t1.hour;
    cout << "Enter minutes  :";
    cin >> t1.min;
    cout << "Enter Seconds :";
    cin >> t1.sec;

    for (;t1.hour!=0;)
    {
        t1.hour = t1.hour - 1;
        t1.sec = t1.sec + 3600;
    }
    for(;t1.min!=0;)
    {
        t1.min = t1.min - 1;
        t1.sec = t1.sec + 60;
    }
    cout<<"Total seconds =>"<<t1.sec;
}