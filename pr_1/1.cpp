#include <iostream>
using namespace std;

class Distance
{
public:
    int feet;
    int inch;
};

int main()
{
    Distance s1, s2;

    cout << "Input 1 " << endl
         << "Feet :";
    cin >> s1.feet;
    cout << "Inch : ";
    cin >> s1.inch;

    cout << endl
         << "Input 2 " << endl
         << "Feet :";
    cin >> s2.feet;
    cout << "Inch : ";
    cin >> s2.inch;

    s2.feet = s2.feet + s1.feet;
    s2.inch = s1.inch + s2.inch;

    for (; s2.inch >= 12;)
    {
        s2.inch = s2.inch - 12;
        s2.feet = s2.feet + 1;
    }

    cout << "Feet => " << s2.feet
         << " ,Inch => " << s2.inch;
}