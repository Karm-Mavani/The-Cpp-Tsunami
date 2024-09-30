#include<iostream>
#include <fstream>
using namespace std;
int main()
{
   ofstream my_file("example.txt");

    my_file << "Line 1" << endl;
    my_file << "Line 2" << endl;
    my_file << "Line 3" << endl;

    string line;

    // loop until the end of the text file
    while (!my_file.eof()) {

        // store the current line of the file
        // in the "line" variable

        // print the line variable
        //cout.open<< my_file << endl;
    }

   my_file.close();
}