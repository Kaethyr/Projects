#include <iostream>
using namespace std;

int input;     // Formula for conversion to F --- (°C × (9/5)) + 32
double c;      // Formula for conversion to C --- (°F - 32) x 5/9
double f;

int main()
{      

   do
   {
       
      cout << "Convert C to F - 1\n" << "Convert F to C - 2 \n" << "Exit - 3" << endl;
      cin >> input;

         if (input == 1)
         {
            cout << "\nEnter Degree's Celsius: ";
            cin >> c;
            cout << (c * 9/5) + 32 << " Degree's Fahrenheit\n\n";\
         }

         if (input == 2)
         {
            cout << "\nEnter Degree's Fahrenheit: ";
            cin >> f;
            cout << (f - 32) * (5/9) << " Degree's Celsius\n\n";          
         }

   }
      while (input != 3);


   return 0;

}









