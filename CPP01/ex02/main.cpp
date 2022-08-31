#include <iostream>
#include <string>

using namespace std;

int main()
{
    std::string hi = "HI THIS IS BRAIN";
    std::string *stringPTR = &hi;
    std::string stringREF = hi;

    std::cout << "Mem. adress of the str variable : ";
    std::cout << &hi <<std::endl;
    std::cout << "Mem. adress of the ptr variable : ";
    std::cout << &stringPTR <<std::endl;
    std::cout << "Mem. adress of the ref variable : ";
    std::cout << &stringREF <<std::endl;

    std::cout << "value of the str variable : ";
    std::cout << hi <<std::endl;
    std::cout << "value of the ptr variable : ";
    std::cout << stringPTR <<std::endl;
    std::cout << "value of the ref variable : ";
    std::cout << stringREF <<std::endl;

    return (0);
}