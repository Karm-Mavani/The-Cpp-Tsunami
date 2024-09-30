#include <iostream>
#include <string.h>
using namespace std;

class Laptop
{
private:
    char name[20];
    int price;
    string processor;

public:
    Laptop(char Name[], int Price, string Processor)
    {
        strcpy(this->name, Name);
        this->price = Price;
        this->processor = Processor;
        Display();
    }
    void Display()
    {
        cout << "Laptop Name : " << this->name << endl;
        cout << "Laptop Price : " << this->price << endl;
        cout << "Laptop Processor : " << this->processor << endl;
    }
};

int main()
{
    char name[20];
    int price;
    string processor;

    cout << "Enter Laptop Name : ";
    cin >> name;
    cout << "Enter Price of Laptop :";
    cin >> price;
    cout << "Enter Processor of Laptop : ";
    cin >> processor;

    Laptop l1(name, price, processor);
}