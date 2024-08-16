#include <iostream>
#include <string.h>
using namespace std;

class Train
{
public:
    int trainNumber;

private:
    char trainName[50];
    char source[50];
    char destination[50];
    char trainTime[10];
    static int trainCount;

public:
    ~Train()
    {
        trainCount--;
    }
    void inputTrain()
    {
        cout << endl
             << "Enter Train Number: ";
        cin >> this->trainNumber;
        cout << "Enter Train name :";
        cin >> this->trainName;
        cout << "Enter Train Source :";
        cin >> this->source;
        cout << "Enter Train Destination :";
        cin >> this->destination;
        cout << "Enter Train Time :";
        cin >> this->trainTime;
    }
    void outputTrain()
    {
        cout << endl
             << "Train Number\t: " << trainNumber << endl;
        cout << "Train Name\t:" << trainName << endl;
        cout << "Train Source\t:" << source << endl;
        cout << "Train Destination\t:" << destination << endl;
        cout << "Train Time\t:" << trainTime << endl;
    }
};

int Train::trainCount = 20;

class RailwaySystem 
{
    Train t1[100];
    int n = 0;

public:
    void addTrain()
    {
        t1[n].inputTrain();
        n++;
    }
    void display()
    {
        for (int i = 0; i < n; i++)
            t1[i].outputTrain();
    }

    void search(int a)
    {
        for (int i = 0; i < n; i++)
        {
            if (a == t1[i].trainNumber)
            {
                t1[i].outputTrain();
            }
        }
    }
};

int main()
{
    RailwaySystem r1;
    int cho, a;

    do
    {
        cout << endl
             << "--- Railway Reservation System Menu ---" << endl;
        cout << "Enter 1 for new records" << endl;
        cout << "Enter 2 for Display all records" << endl;
        cout << "Enter 3 for search by records" << endl;
        cout << "Enter 4 for exit" << endl;
        cout << "Enter your choice :";
        cin >> cho;
        switch (cho)
        {
        case 1:
            r1.addTrain();
            break;
        case 2:
            r1.display();
            break;
        case 3:
            cout << "Enter Search Train No. :";
            cin >> a;
            r1.search(a);
            break;
        case 4:
            cout << "Good Bye......";
            break;
        default:
            cout << "Inalid Value....";
        }
    } while (cho != 4);
}