#include <iostream>
using namespace std;

class Employ
{
public:
    int id;
    char name[30];
    int age;
    int salary;
    char role[20];
    char city[25];
    char experience[500];
    char company[30];
};

int main()
{
    Employ e[5];
    for (int i = 0; i < 5; i++)
    {
        cout << endl
             << "for employee" << i + 1 << endl
             << endl;

        cout << "Enter employ ID :";
        cin >> e[i].id;

        fflush(stdin);
        cout << "Enter employ name : ";
        gets(e[i].name);

        cout << "Enter employ Age :";
        cin >> e[i].age;

        cout << "Enter employ salary :";
        cin >> e[i].salary;

        fflush(stdin);
        cout << "Enter employ role :";
        gets(e[i].role);

        fflush(stdin);
        cout << "Enter employ City :";
        gets(e[i].city);

        fflush(stdin);
        cout << "Enter employ experience : ";
        cin >> e[i].experience;

        fflush(stdin);
        cout << "Enter employ company";
        gets(e[i].company);
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "For employ" << i + 1 << endl
             << endl;
        cout << "ID : " << e[i].id << endl;
        cout << "Name : " << e[i].name << endl;
        cout << "Age : " << e[i].age << endl;
        cout << "Salary : " << e[i].salary << endl;
        cout << "Role : " << e[i].role << endl;
        cout << "City : " << e[i].city << endl;
        cout << "Experience : " << e[i].experience << endl;
        cout << "Company : " << e[i].company << endl;
    }
}