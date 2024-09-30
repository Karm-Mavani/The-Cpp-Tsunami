#include <iostream>
using namespace std;

class BankAccount
{
private:
    long int accountNumber;
    int a, b;
    double balance = 0;
    string ownerName;

public:
    void Setdata()
    {
        cout << "Enter Account Number : ";
        cin >> accountNumber;
        cout << "Enter Accout Holder Name : ";
        cin >> ownerName;
        Credit();
    }

    void Credit()
    {
        cout << "Enter Credit value : ";
        cin >> a;
        balance = balance + a;
    }

    void Debit()
    {
        cout << " Enter Debit value : ";
        cin >> b;
        balance = balance - b;
    }
    void Display()
    {
        cout << "\nAccount Number : " << accountNumber << endl;
        cout << "Account Holder Name : " << ownerName << endl;
        cout << "Balance : " << balance << endl;
    }
};

int main()
{
    int c, a = 0;
    BankAccount b1;
    b1.Setdata();

    for (; a == 0;)
    {
        cout << "\n1.Credit\n2.Debit\n3.Display\n4.Exit\n";
        cout << "\nEnter your choice : ";
        cin >> c;

        switch (c)
        {
        case 1:
            b1.Credit();
            break;
        case 2:
            b1.Debit();
            break;
        case 3:
            b1.Display();
            break;
        case 4:
            a++;
            break;
        default:
            cout << "Invalid choice";
        }
    }
}