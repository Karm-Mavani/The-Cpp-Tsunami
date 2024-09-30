#include <iostream>
using namespace std;

class Vehicle
{
    virtual void StartEngine() = 0;
    virtual void Drive() = 0;
};

class Car : public Vehicle
{
public:
    void StartEngine()
    {
        cout << "Car Engine staring..." << endl;
    }
    void Drive()
    {
        cout << "You can drive...." << endl;
    }
};
class Bike : public Vehicle
{
public:
    void StartEngine()
    {
        cout << "Bike Engine staring..." << endl;
    }
    void Drive()
    {
        cout << "You can drive...." << endl;
    }
};
int main()
{
    int a, b;
    cout << "\n\nEnter no. of Array of Objects : ";
    cin >> a;
    Car c1[a];
    Bike b1[a];
    cout << "\n1.Car\n2.Bike";
    cout << "Entre your choice : ";
    cin >> b;
    for (int i = 0; i <= a; i++)
    {
        switch (b)
        {
        case 1:
            cout << "\nFor Object ==> " << i+1 << endl;
            c1[i].StartEngine();
            c1[i].Drive();
            
            break;
        case 2:
            cout << "\nFor Object ==> " << i+1 << endl;
            b1[i].StartEngine();
            b1[i].Drive();
            
        default:
            cout << "Invalid choice.......\n";
            break;
        }
    }
}