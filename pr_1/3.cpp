#include <iostream>
using namespace std;

class Employee
{
private:
    char companyname[40];
    int salary;
    string role;

public:
    string id;
    char name[20];
    string city;
    int age;
};

int main()
{
    Employee s1;

    cout << "Employee Details : "
         << endl
         << " id : ";
    fflush(stdin);
    cin >> s1.id;

    cout << "Name : ";
    fflush(stdin);
    cin >> s1.name;

    cout << "City : ";
    fflush(stdin);
    cin >> s1.city;

    cout << "Age : ";
    cin >> s1.age;

    cout << endl << endl << "Output =>" << endl 
    << "ID   : " << s1.id << endl 
    << "Name : " << s1.name << endl 
    << "City : " << s1.city << endl 
    << "Age  : " << s1.age;
}