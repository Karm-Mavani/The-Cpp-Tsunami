#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Array size : ";
    cin >> n;

    int arr[n];
    cout << "Enter Array Elements : " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "A[" << i + 1 << "] : ";
        cin >> arr[i];
    }

    cout << "Even Elements are : " ;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout << arr[i] << endl;
        }
    }
}