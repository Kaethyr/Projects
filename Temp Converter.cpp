#include <iostream>
#include <iomanip>
using namespace std;

// Formula for conversion to F --- (°C × (9/5)) + 32
// Formula for conversion to C --- (°F - 32) x 5/9

int input;
double c; 
double f;
char yes;

int main()
{      
   cout << "Convert C to F - Input 1" << endl << "Convert F to C - Input 2" << endl;
   cin >> input;

      if (input = 1)
      {
         cout << "\nEnter Degree's Celsius: " << endl;
         cin >> c;
         cout << (c * 9/5) + 32 << " Degree's Fahrenheit" << endl;
         exit(EXIT_SUCCESS);
      }

      if (input = 2)
      {
         cout << "\nEnter Degree's Fahrenheit: " << endl;
         cin >> f;
         cout << (f - 32) * (5/9) << " Degree's Celsius" << endl;
         exit(EXIT_SUCCESS);
      }
   return 0;

}










