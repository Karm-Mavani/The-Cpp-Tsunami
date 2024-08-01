#include <iostream>
#include <string.h>
using namespace std;

class Company
{
public:
    int id;
    char name[30];
    int staff_quantity;
    int revenue;
    int raw_diamond;
    int export_diamond;
    char ceo[20];

    Company()
    {

        cout << "Enter ID :";
        cin >> id;
        cout << "Enter Name :";
        cin >> name;
        cout << "Enter Staff Quantity :";
        cin >> staff_quantity;
        cout << "Enter Revenue :";
        cin >> revenue;
        cout << "Enter Raw Diamond :";
        cin >> raw_diamond;
        cout << "Enter Export Diamond :";
        cin >> export_diamond;
        cout << "Enter CEO :";
        cin >> ceo;

        this->id = id;
        strcpy(this->name, name);
        this->staff_quantity;
        this->revenue;
        this->raw_diamond;
        this->export_diamond;
        strcpy(this->ceo, ceo);
    }
    void getData()
    {
        cout << endl
             << endl
             << "ID : " << this->id << endl;
        cout << "Name : " << this->name << endl;
        cout << "Staff Quantity : " << this->staff_quantity << endl;
        cout << "Revenue : " << this->revenue << endl;
        cout << "Raw Diamond : " << this->raw_diamond << endl;
        cout << "Export Diamond : " << this->export_diamond << endl;
        cout << "CEO :" << this->ceo << endl
             << endl;
    }
};

int main()
{
    int a;
    cout << "Enter no. of companies :";
    cin >> a;
    Company c[a];
    for (int i = 0; i < a; i++)
        c[i].getData();
}