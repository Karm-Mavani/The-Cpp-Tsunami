#include <iostream>
using namespace std;

int main()
{
    int a, b, j = 0;
    
    cout << "Enter Starting Year : ";
    cin >> a;
    cout << "Enter Ending year : ";
    cin >> b;

    int leap[b - a];
    for (int i = a; i <= b; i++)
    {
        if (i % 4 == 0 )
        {
            leap[j] = i;
            j++;
        }
    }

    cout << endl <<"Leap year is :" << endl;
    
    for(int i=0;i<j;i++)
    {
        cout << leap[i] << endl;

    }
}
