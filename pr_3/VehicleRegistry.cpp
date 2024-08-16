#include <iostream>
#include <string.h>
using namespace std;

class Vehicle
{
protected:
    char manufacturer[50];
    char model[20];
    int year;
    static int totalVehicle;

public:
    int vehicleID;

    // setter
    void inputV()
    {
        cout << endl
             << "Enter Vehicle ID: ";
        cin >> vehicleID;
        fflush(stdin);
        cout << "Enter Manufacturer :";
        gets(manufacturer);
        fflush(stdin);
        cout << "Enter Model : ";
        gets(model);
        cout << "Enter Year : ";
        cin >> year;
    }

    void getv()
    {
        cout << "Vehicle ID : " << vehicleID << endl;
        cout << "Manufacturer : " << manufacturer << endl;
        cout << "Model : " << model << endl;
        cout << "Year : " << year << endl;
    }
};

int Vehicle::totalVehicle = 20;

class Car : public Vehicle
{

    char fueltype[50];

public:
    void setdataC()
    {
        cout << "Enter Fuel Type : ";
        cin >> fueltype;
    }
    void getdataC()
    {
        getv();
        cout << "Fuel Type : " << fueltype << endl;
    }
};

class ElectricCar : public Car
{

    int batteryCapacity;

public:
    void setdataEC()
    {
        cout << "Enter Battery Capacity : ";
        cin >> batteryCapacity;
    }

    void getdataEC()
    {
        getdataC();
        cout << "Batttery Capacity : " << batteryCapacity << endl;
    }
};

class Aircraft : public Car, public ElectricCar
{

    int flightrange;

public:
    void setdataAr()
    {
        cout << "Enter Flight Range : ";
        cin >> flightrange;
    }
    void getdataAr()
    {
        getdataEC();
        ElectricCar::getdataC();
        cout << "Flight Range : " << flightrange << endl;
    }
};

class FlyingCar : public Car, public Aircraft
{
public:
    void setdataF()
    {
        setdataAr();
    }

    void getdataF()
    {
        getdataAr();
    }
};

class Sportscar : public ElectricCar
{

    int topspeed;

public:
    void setdataS()
    {
        cout << "Enter Top Speed : ";
        cin >> topspeed;
    }
    void getdatS()
    {
        getdataEC();
        cout << "Top Speed : " << topspeed << endl;
    }
};

class Sedan : public Car
{
public:
    void SetdataN()
    {
        setdataC();
    }
    void getdataN()
    {
        getdataC();
    }
};

class Suv : public Car
{
public:
    void setdataSuv()
    {
        setdataC();
    }
    void getdataSuv()
    {
        getdataC();
    }
};

class VehicleRegistry
{
    Vehicle v1[100];
    int n = 0;

public:
    VehicleRegistry()
    {
        cout << endl
             << "Welcome to Vehicle Registry System" << endl<<endl;
    }
    ~VehicleRegistry()
    {
        cout << "Thank You For Visiting........." << endl;
    }
    void addCar()
    {
        v1[n].inputV();
        n++;
    }
    void display()
    {
        for (int i = 0; i < n; i++)
            v1[i].getv();
    }

    void search(int a)
    {
        for (int i = 0; i < n; i++)
        {
            if (a == v1[i].vehicleID)
            {
                v1[i].getv();
            }
        }
    }
};

int main()
{
    Car c1;
    ElectricCar e1;
    Aircraft a1;
    FlyingCar f1;
    Sportscar s1;
    Sedan n1;
    Suv suv1;

    VehicleRegistry v1;
    int cho = 1, z, a;

    for (; cho != 8;)
    {
        cout <<endl<<endl<< "1. Car\n2. Electric Car\n3. Aircraft\n4. Flying Car\n5. Sports Car\n6. Sedan\n7. Suv\n8. Exit" << endl
             << endl;
        cout << "Enter your Choice : ";
        cin >> cho;

        switch (cho)
        {
        
        
        case 1:
            cout << "1. Add Car\n2. Display\n3. Search\n4. Exit " << endl
                 << endl;
            cout << "Enter your Choice : ";
            cin >> z;
            switch (z)
            {
            case 1:
                v1.addCar();
                break;

            case 2:
                v1.display();
                break;

            case 3:
                cout << "Enter Search Car No. :";
                cin >> a;
                v1.search(a);
                break;
            case 4:
                cout << "Good Bye......"<<endl<<endl<<endl;
                break;
            default:
                cout << "Inalid Value...."<<endl<<endl<<endl;
            }
            break;

        
        
        
        case 2:
            cout << "1. Add Car\n2. Display\n3. Search\n4. Exit " << endl
                 << endl;
            cout << "Enter your Choice : ";
            cin >> z;
            switch (z)
            {
            case 1:
                e1.setdataEC();
                break;

            case 2:
                v1.display();
                break;

            case 3:
                cout << "Enter Search Car No. :";
                cin >> a;
                v1.search(a);
                break;
            case 4:
                cout << "Good Bye......"<<endl<<endl<<endl;
                break;
            default:
                cout << "Inalid Value...."<<endl<<endl<<endl;
            }
            break;
        
        
        
        
        case 3:
            cout << "1. Add Aircraft\n2. Display\n3. Search\n4. Exit " << endl
                 << endl;
            cout << "Enter your Choice : ";
            cin >> z;
            switch (z)
            {
            case 1:
                f1.setdataAr();
                break;

            case 2:
                v1.display();
                break;

            case 3:
                cout << "Enter Search Aircraft No. :";
                cin >> a;
                v1.search(a);
                break;
            case 4:
                cout << "Good Bye......"<<endl<<endl<<endl;
                break;
            default:
                cout << "Inalid Value...."<<endl<<endl<<endl;
            }
            break;

        
        
        
        
        case 4:
            cout << "1. Add Car\n2. Display\n3. Search\n4. Exit " << endl
                 << endl;
            cout << "Enter your Choice : ";
            cin >> z;
            switch (z)
            {
            case 1:
                f1.setdataF();
                break;

            case 2:
                v1.display();
                break;

            case 3:
                cout << "Enter Search Car No. :";
                cin >> a;
                v1.search(a);
                break;
            case 4:
                cout << "Good Bye......"<<endl;
                break;
            default:
                cout << "Inalid Value...."<<endl;
            }
            break;
        
        
        
        
        case 5:
            cout << "1. Add Car\n2. Display\n3. Search\n4. Exit " << endl
                 << endl;
            cout << "Enter your Choice : ";
            cin >> z;
            switch (z)
            {
            case 1:
                s1.setdataS();
                break;

            case 2:
                v1.display();
                break;

            case 3:
                cout << "Enter Search Car No. :";
                cin >> a;
                v1.search(a);
                break;
            case 4:
                cout << "Good Bye......"<<endl<<endl<<endl;
                break;
            default:
                cout << "Inalid Value...."<<endl<<endl<<endl;
            }
            break;

        
        
        
        case 6:
            cout << "1. Add Car\n2. Display\n3. Search\n4. Exit " << endl
                 << endl;
            cout << "Enter your Choice : ";
            cin >> z;
            switch (z)
            {
            case 1:
                n1.SetdataN();
                break;

            case 2:
                v1.display();
                break;

            case 3:
                cout << "Enter Search Car No. :";
                cin >> a;
                v1.search(a);
                break;
            case 4:
                cout << "Good Bye......"<<endl<<endl<<endl;
                break;
            default:
                cout << "Inalid Value...."<<endl<<endl<<endl;
            }
            break;
        
        
        
        
        case 7:
            cout << "1. Add Car\n2. Display\n3. Search\n4. Exit " << endl
                 << endl;
            cout << "Enter your Choice : ";
            cin >> z;
            switch (z)
            {
            case 1:
                suv1.setdataSuv();
                break;

            case 2:
                v1.display();
                break;

            case 3:
                cout << "Enter Search Car No. :";
                cin >> a;
                v1.search(a);
                break;
            case 4:
                cout << "Good Bye......"<<endl<<endl<<endl;
                break;
            default:
                cout << "Inalid Value...."<<endl<<endl<<endl;
            }
            break;
        default:
            cout << "Invalid Value......"<<endl<<endl<<endl;
            break;
        }
    }
}
