#include <iostream>
using namespace std;

class BankAccount
{
protected:
    long long int accountNumber;
    char accoutHolder[50];

    double a, b, c;

public:
    double balance;
    double inputdata()
    {
        cout << endl
             << "Enter Account Number : ";
        cin >> this->accountNumber;
        cout << "Enter Account Holder Name : ";
        cin >> this->accoutHolder;

    label:
        cout << "Enter Your Balance :";
        cin >> a;
        if (a >= 1000)
            this->balance = this->balance + a;
        else
        {
            system("cls");
            this->balance = this->balance + a;
            cout << "Your Minimum Balance Must be 1000" << endl;
            goto label;
        }
        return balance;
    }

    void deposit()
    {
        cout << "Enter Deposit value :";
        cin >> a;
        if (a > 0)
        {
            this->balance = this->balance + a;
            cout << "Deposit Successfull" << endl;
            cout << "Your New Balance is : " << this->balance << endl;
        }
    }

    void withdraw()
    {
    LABEL1:
        cout << "Enter withdarw value :";
        cin >> b;
        c = balance - b;
        if (a >= 1000)
        {
            if (b > balance)
                cout << "Insufficient Balance" << endl;
            else
                balance = balance - b;
        }
        else if (10000 < b)
        {
            cout << " *** Over Draft Limit ***";
        }
        else
        {
            cout << "Minimum Left Amount must be 1000" << endl;
            cout << "     PLEASE TRY AGAIN       ";
            goto LABEL1;
        }
    }

    void display()
    {
        cout << endl
             << "Account Number\t: " << this->accountNumber << endl
             << "Accout Holder Name:" << this->accoutHolder << endl
             << "Account Balance\t: " << this->balance << endl;
    }
};

class SavingAccount : public BankAccount
{
    double interestRate, interest;

public:
    double inputsa()
    {
        cout << "Enter Interest Rate :";
        cin >> interestRate;
        return interestRate;
    }

    inline void inputCel(double interestRate, double myBalance)
    {
        cout << "\nYour Current Balance is " << myBalance << endl
             << endl;
        interest = (myBalance * interestRate) / 100;

        cout << "Commen Interest For " << interestRate << " % " << " is " << interest << endl
             << endl;
    }
};

class CheckingAccount : public BankAccount
{

    static double overdraftLimit;

public:
    void overca()
    {
        if (a < overdraftLimit)
            cout << " ** Overdraft Limit **" << overdraftLimit;
    }
};

double CheckingAccount::overdraftLimit = 30000;

class FixedDepositeAccount : public BankAccount
{
    double fixedRate = 10, fixedInterest;
    int d;

public:
    int inputfda()
    {
        cout << "Enter Duration in Month :";
        cin >> d;
        return d;
    }
    void inputCel(int a, double your)
    {
        fixedInterest = (balance * fixedRate * your) / 1200;
        cout << "Your Inetrest with 10" << "%" << " and " << d << " Months Will be : " << fixedInterest << endl;
    }
};

//
//
// system("cls"); --> Clear screen
//
//

int main()
{
    BankAccount b1;
    SavingAccount s1;
    CheckingAccount c1;
    FixedDepositeAccount f1;
    int a = 1, b = 0;

    for (; a != 2;)
    {
        system("cls");
        cout << endl
             << "1.Continue\n2.Exit\n";
        cout << "Enter Your Choice :";
        cin >> a;
        system("cls");
        switch (a)
        {
        case 1:
            if (b == 0)
            {
                b1.inputdata();
                b++;
                system("cls");
            }
            cout << "1.Saving Accout\n2.Checking Account\n3.Fixed Deposit Account\n"
                 << endl;
            cout << "Enter Your choice :";
            cin >> b;
            system("cls");
            switch (b)
            {
            case 1:
                cout << "1.Deposit\n2.Withdraw\n3.continue"
                     << endl;
                cout << "Enter your choice :";
                cin >> a;
                system("cls");
                switch (a)
                {
                case 1:
                    b1.deposit();
                    break;
                case 2:
                    b1.withdraw();
                    break;
                }
                s1.inputCel(s1.inputsa(), b1.balance);
                break;
            case 2:
                system("cls");
                b1.display();
                system("cls");
                break;
            case 3:
                cout << "1.Deposit\n2.Withdraw\n3.continue"
                     << endl;
                cin >> a;
                system("cls");
                switch (a)
                {
                case 1:
                    b1.deposit();
                    break;
                case 2:
                    b1.withdraw();
                    break;
                }
                f1.inputCel(f1.inputfda(), b1.balance);
                break;
            }
            break;
        case 2:
            cout << "Thank you.....";
            system("cls");
            break;
            break;
        }
    }

    // b1.deposit(b1.depositprint());
    // b1.withdarw(b1.withdrawprint());
    // b1.print();
}