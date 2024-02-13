#include <iostream>
using namespace std;


int main()
{

    int n, i;
    float num[100], sum = 0.0, average;

    std::cout << "Enter numbers of data: ";
    std::cin >> n;

    while (n > 100 || n <= 0)
    {

        std::cout << "Error! Enter a number between 1 - 100: ";
        std::cin >> n;

    }

    for (i = 0; i < n; ++i)
    {

        std::cout << i+1 << ". Enter number: ";
        std::cin >> num[i]; 
        sum += num[i];
        
    }

    average = sum/n;
    std::cout << average << endl;


    return 0;



}