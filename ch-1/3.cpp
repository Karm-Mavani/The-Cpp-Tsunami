#include <iostream>
using namespace std;

int main()
{
    char tog[40];
    cout << "Enter string : ";
    cin >> tog;

    for (int i = 0; tog[i] != '\0'; i++)
    {
        if (tog[i] >= 97 && tog[i] <= 122)
        {
            tog[i] = tog[i] - 32;
        }
        else if (tog[i] >= 65 && tog[i] <= 90)
        {
            tog[i] = tog[i] + 32;
        }
    }
   
        cout << tog;
    
}