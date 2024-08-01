#include <iostream>
#include <string.h>
using namespace std;

class Student
{
public:
    int id;
    char name[20];
    int age;
    char course[20];
    char city[20];
    char email[40];
    char college[40];

public:
    void setdata(int i)
    { 
        cout << endl
             << endl
             << " For Student " << i + 1 << endl;

        cout << "Enter ID: ";
        cin >> id;

        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Course :";
        cin >> course;
        cout << "Enter City :";
        cin >> city;
        cout << "Enter Email :";
        cin >> email;
        cout << "Enter College :";
        cin >> college;
    }
    void getdata(int i)
    {
        cout << endl
             << endl
             << "For Student" << i + 1 << endl
             << endl;
        cout << "Name :" << name << endl;
        cout << "Age :" << age << endl;
        cout << "Course :" << course << endl;
        cout << "City :" << city << endl;
        cout << "Email :" << email << endl;
        cout << "College :" << college << endl;
    }
    
};

int main()
{
    Student s1[4];
   
    for (int i = 0; i < 5; i++)
        s1[i].setdata(i);
    
    for (int i = 0; i < 5; i++)
        s1[i].getdata(i);
}