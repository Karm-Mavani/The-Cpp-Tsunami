#include <iostream>
#include <string.h>
using namespace std;

class Customer
{
    int id;
    char name[20];
    int age;
    char city[20];
    long long int monumber;
    int validity;
    char bname[20];

public:
    void setdata(int i)
    {
        cout << endl
             << endl
             << "For customer" << i + 1 << endl;
        cout <<"Enter ID :";
        cin >> id;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter city: ";
        cin >> city;
        cout << "Enter mobile number: ";
        cin >> monumber;
        cout << "Enter bank Validity year: ";
        cin >> validity;
        cout << "Enter Brand Name :";
        cin >> bname;
    }
    void getdata(int i)
    {
        cout << endl<<endl<<"For customer"<<endl;
        cout << "Customer ID: " << id << endl;
        cout << "Customer Name: " << name << endl;
        cout << "Customer Age: " << age << endl;
        cout << "Customer City: "<< city << endl;
        cout << "Customer Mobile Number: "<< monumber << endl;
        cout << "Customer Bank Validity Year: "<< validity<<endl;
        cout << "Customer Brand Name: "<< bname << endl;
    }
};

int main()
{
    Customer c1[4];

    for(int i=0;i<5;i++)
    {
        c1[i].setdata(i);
        c1[i].getdata(i);
    }
}