#include <iostream>
using namespace std;

class BankAccount
{
protected:
    long long int accountNumber;
    char accoutHolder[50];
    public:
    double balance ,a, b, c;


public:
    double inputdata()
    {
        int a;
        cout << endl
             << "Enter Account Number : ";
        cin >> accountNumber;
        cout << "Enter Account Holder Name : ";
        cin >> accoutHolder;
    
    label:
        cout << "Enter Your Balance :";
        cin >> a;
        if (a >= 1000)
            this->accountNumber = this->balance + a;
        else
        {
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
            
            cout << "Your New Balance is : " << this->balance << endl;
            // cout << "Deposit Successfull" << endl;
        }
    }

    void withdraw()
    {
    LABEL1:
        cout << "Enter withdarw value :";
        cin >> b;
        double c;
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

    /* void printbalance()
     {
         cout << "Account balance :" << this->balance;
     }
     void getbalance()
     {
         cout << "Your Current Blance is :" << this->balance << balance;
     }*/
    void display()
    {
        cout << endl
             << "Account Number\t: " << this->accountNumber << endl
             << "Accout Holder Name\t:" << this->accoutHolder << endl
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

    inline void inputCel(double interestRate)
    {
        interest = (balance * interestRate) / 100;
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
    void interCel(int a)
    {
        fixedInterest = (balance * fixedRate * d) / 1200;
        cout << "Your Inetrest with " << d << "Months Will be :" << fixedInterest << endl;
    }
};

class Function : public BankAccount, public SavingAccount, public CheckingAccount, public FixedDepositeAccount
{
    int a, b;

public:
    int show()
    {
        cout << endl
             << "1.Saving Accout\n2.Checking Account\n3.Fixed Deposit Account\n"
             << endl;
        cout << "Enter Your choice :";
        cin >> b;
        return b;
    }
    void show2(int b, BankAccount b1)
    {
        switch (b)
        {
        case 1:
            cout << "1.Deposit\n2.Withdraw\n3.continue"
                 << endl;
            cout << "Enter your choice :";
            cin >> a;
            switch (a)
            {
            case 1:
                SavingAccount::deposit();
                break;
            case 2:
                SavingAccount::withdraw();
                break;
            }
            inputCel(inputsa());
            break;
        case 2:

            b1.display();
            break;
        case 3:
            cout << "1.Deposit\n2.Withdraw\ncontinue"
                 << endl;
            cin >> a;
            switch (a)
            {
            case 1:
                FixedDepositeAccount::deposit();
                break;
            case 2:
                FixedDepositeAccount::withdraw();
                break;
            }
            inputCel(inputfda());
            break;
        }
    }

    void entry(BankAccount b1)
    {
        show2(show(), b1);
    }
};

int main()
{
    BankAccount b1;
    SavingAccount s1;
    CheckingAccount c1;
    FixedDepositeAccount f1;
    Function fu1;
    int a = 1, b = 0;

    for (; a != 2;)
    {
        cout << endl
             << "1.Continue\n2.Exit\n";
        cout << "Enter Your Choice :";
        cin >> a;

        switch (a)
        {
        case 1:
            if (b == 0)
            {
                b1.inputdata();
                b++;
            }
            fu1.entry(b1);

            break;
        case 2:
            cout << "Thank you.....";
            break;
            break;
        }
    }

    // b1.deposit(b1.depositprint());
    // b1.withdarw(b1.withdrawprint());
    // b1.print();
}