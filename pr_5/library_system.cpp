#include <iostream>
#include <string.h>
using namespace std;

class LibraryItem
{
private:
    string title;
    string author;
    string dueDate;

public:
    virtual void Checkout()
    {
    }
    virtual void returnItem()
    {
    }
    virtual void Displaydetails()
    {
            
    }

    void settitle(string newtitle)
    {
        cout << "Enter the title of the book: ";
        cin >> newtitle;
    }
    void setauthor(string newauthor)
    {
        cout << "Enter the author of the book: ";
        cin >> newauthor;
    }
    void setdueDate(string newdueDate)
    {
        cout << "Enter the due date of the book (in DD-MM-YYYY format): ";
        cin >> newdueDate;
    }
    void gettitle()
    {
        cout << "The title of the book is: " << title << endl;
    }
    void getauthor()
    {
        cout << "The author of the book is: " << author << endl;
    }
    void getdueDate()
    {
        cout << "The due date of the book is: " << dueDate << endl;
    }
};

class Book : public LibraryItem
{
};

class DVD : public LibraryItem
{
    string dura;
    void setDuration()
    {
        cout << "Enter Duration for DVDs : ";
        cin >> dura;
    }
    void getDuration()
    {
        cout << "Duration of DVDs is " << dura << endl;
    }
};

class Magazine : public LibraryItem
{
    int issue;
    void setissue()
    {
        cout << "Enter the issue number of the magazine: ";
        cin >> issue;
    }
    void getissue()
    {
        cout << "The issue number of the magazine is: " << issue << endl;
    }
};

int main()
{
}