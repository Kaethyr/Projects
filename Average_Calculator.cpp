#include <iostream>
#include <list>


int main()
{

    double a, b, c;

    std::cout << "Enter first number: " << "\n";
    std::cin >> a;

    std::cout << "Enter second number: " << "\n";
    std::cin >> b;

    std::cout << "Enter third number: " << "\n";
    std::cin >> c;

    double avg;
    double sum;

    avg = (a + b + c)/3;
    sum = (a + b + c);

    std::cout << "Your total sum is: " << sum;
    std::cout << "Your average is: " << avg;



}