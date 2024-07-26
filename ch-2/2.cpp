#include <iostream>
using namespace std;

class Car
{
public:
    int id;
    string company;
    string color;
    char model[20];
    int year;
};

int main()
{
    Car c1[4];

    for (int i = 0; i < 4; i++)
    {
        cout << endl
             << "For CAR " << i + 1 << endl
             << endl;
        cout << "Enter ID : ";
        cin >> c1[i].id;

        fflush(stdin);
        cout << "Enter Company : ";
        cin >> c1[i].company;

        fflush(stdin);
        cout << "Enter color : ";
        cin >> c1[i].color;

        cout << "Enter Model : ";
        cin >> c1[i].model;

        cout << "Enter Realese Year : ";
        cin >> c1[i].year;
    }

    for (int i = 0; i < 4; i++)
    {
        cout << endl
             << "For CAR" << i + 1 << endl
             << endl;

        cout<<"Id : "<<c1[i].id<<endl
        <<"Company : "<<c1[i].company<<endl
        <<"Color : "<<c1[i].color<<endl
        <<"Model : "<<c1[i].model<<endl
        <<"Year : "<<c1[i].year<<endl;
    }
}
