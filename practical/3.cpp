#include <iostream>
using namespace std;
const int pi = 22 / 7;

class Shape
{
protected:
    string colour;

    double area, length = 0, breath = 0, radius = 0;

public:
    void setter()
    {
        cout << "Colour : ";
        cin >> colour;
    }
    virtual void DisplayDetails()
    {
    }
};

class Rectangle : public Shape
{

public:
    void AreaRectangle()
    {
        setter();
        cout << "Enter length of rectangle : ";
        cin >> length;
        cout << "Enter breadth of rectangle : ";
        cin >> breath;
        area = length * breath;
        cout << "Area of Rectangle : " << area << endl;
    }
    void DisplayDetails()
    {
        cout << "Colour : " << colour << endl;
        cout << "Length : " << length << endl;
        cout << "Breadth : " << breath << endl;
    }
};

class Circle : public Shape
{
double a;
public:
    void AreaCircle()
    {
        setter();
        cout << "Enter Radius of the circle : ";
        cin >> radius;
        a=radius*radius;
        area =  (22*a)/7;
    }
    void DisplayDetails()
    {
        cout << "Colour : " << colour << endl;
        cout << "Radius : " << area << endl;
    }
};

int main()
{
    Rectangle rect;
    Circle cl;
    int choice;

    cout << "\n1.Circle\n2.Rectangle\n";
    cout << "\nEnter your choice : ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cl.AreaCircle();
        cl.DisplayDetails();
        break;
    case 2:
        rect.AreaRectangle();
        rect.DisplayDetails();
        break;
    default:
        cout << "Invalid choice";
    }
}