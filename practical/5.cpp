#include <iostream>
using namespace std;

int main()
{

    int a, b, ans;
    string error = "Can Not Divide By ZERO";

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    try
    {
        if (b == 0)
        {
            throw error;
        }
        else
        {
            ans = a / b;
            cout << "Ans: " << ans << endl;
        }
    }
    catch (string e)
    {
        cout << endl
             << e << endl;
    }
}