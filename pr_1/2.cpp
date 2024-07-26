#include <iostream>
using namespace std;

int main()
{
   int t, hour = 0, min = 0;

   cout << "Enter seconds : ";
   cin >> t;

   for (; t >= 60;)
   {
      t = t - 60;
      min = min + 1;
   }

   for (; min >= 60;)
   {
      min = min - 60;
      hour = hour + 1;
   }

   cout << endl
        << hour << ":" << min << ":" << t;
}