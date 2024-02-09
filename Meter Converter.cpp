#include <iostream>
#include <iomanip>
using namespace std;

int main()

{
    
    string _system;
    double f = 3.281;
    
    cout << "Convert Meters to feet or Feet to meters?" << endl;
    cout << "Type meters or feet" << endl;
    cin >> _system;
    

        if (_system == "meters")
        {
            int amount_meters;
            
            cout << "How many meters?" << endl;
            cin >> amount_meters;

            std::cout << std::fixed;
            std::cout << std::setprecision(2);
            cout << "Approx " << amount_meters*f << " feet" << endl;
            exit(EXIT_SUCCESS);
        }
        
        if (_system == "feet")
        {
            int amount_feet;

            cout << "How many feets?" << endl;
            cin >> amount_feet;

            std::cout << std::fixed;
            std::cout << std::setprecision(2);
            cout << "Approx " << amount_feet/f << "m" << endl;
            exit(EXIT_SUCCESS);
        }

        else if (_system != "meters" && _system != "feet");
        {
            cout << "Only enter numbers!";
        }
    
    
    return 0;
}


