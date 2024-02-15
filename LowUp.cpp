#include <iostream>
#include <cctype>
using namespace std;


int main()
{ 

    string input;

    std::cout << "\nType Exit to end \n" << endl ;
    std::cout << "Enter Upper to convet to uppercase. \n or \nEnter Low to convert to lowercase." << endl;
    std::getline(std::cin, input); 

    while(input == "exit")
        {

            exit(0);

        }


    while(input = "upper", "Upper")
    {

        std::string sentence_input; 
        std::cout << "Enter your sentence: ";
        std::getline(std::cin, sentence_input); 

        while(sentence_input == "exit")
        {

            exit(0);

        }

        while(sentence_input.size() >= 20)
        {

            std::cout << "Your sentence is too long!" << std::endl;
            std::cout << "Enter your sentence: ";
            std::getline(std::cin, sentence_input); 
            
        }
        
        for (int i = 0; i < sentence_input.length(); ++i)
        {    

            sentence_input[i] = toupper(sentence_input[i]);
            
        }
            
        std::cout << sentence_input << endl;
        exit(0);
    }
    

    while(input = "low", "Low")
    {

        std::string sentence_input; 
        std::cout << "Enter your sentence: ";
        std::getline(std::cin, sentence_input); 

        while(sentence_input == "exit")
        {

            exit(0);

        }

        while(sentence_input.size() >= 20)
        {

            std::cout << "Your sentence is too long!" << std::endl;
            std::cout << "Enter your sentence: ";
            std::getline(std::cin, sentence_input); 
            
        }
        
        for (int i = 0; i < sentence_input.length(); ++i)
        {    

            sentence_input[i] = tolower(sentence_input[i]);
            
        }
            
        std::cout << sentence_input << endl;
        exit(0);
    }
    
    return 0;

}