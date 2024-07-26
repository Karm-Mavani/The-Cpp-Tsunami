#include <iostream>
#include<string.h>
using namespace std;

class Student
{
    int id;
    char name[20];
    int age;
    char course[20];
    string city;
    string email;
    char college[40];

public:
    void setdata(int i, char na[],char c,string ci,string e,char co)
    { //
        this->id = i;
        strcpy(this->name,na);

        cout << na;
    }
};

int main()
{
    Student s1;
    //s1.setdata(15, "karm");
}