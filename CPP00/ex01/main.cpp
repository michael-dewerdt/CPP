#include <iostream>
#include "contact.hpp"
#include "phonebook.hpp"

using namespace std;

int		main(void)
{
    PhoneBook phonebook;
    Contact contact[7];
    std::string input;
    std::string answer;
    int index = 0;
    int full = 0;

    while (input != "EXIT" || input == "exit")
    {
        std::cout<<"COMMAND (ADD/SEARCH/EXIT): ";
        getline(std::cin, input);
        if (input == "ADD" || input == "add")
        {
            if (index <= 7 && full == 0)
            {
                phonebook.add_contact(contact[index].new_friend(),index);
                index++;
            }
            else
            {
                std::cout<<"The PhoneBook is full, would you like to erase the oldest contact ? (Y/N): ";
                std::cin >> answer;
                if (answer == "Y" || answer == "y")
                {
                    index = 0;
                    full = 8;
                    std::cin.clear();
		            std::cin.ignore(10000,'\n');
                    phonebook.add_contact(contact[index].new_friend(),index);
                }
                else
                {
                    std::cin.clear();
		            std::cin.ignore(10000,'\n');;
                }
            }
        }
        else if (input == "SEARCH" || input == "search")
        {
            if (full == 8)
                phonebook.search(full);
            else if (index > 0)
                phonebook.search(index);
            else
                std::cout<<"The PhoneBook is empty for the moment"<<std::endl;
        }
        else
            std::cout<<"Wrong command..."<<std::endl;
    }
    return (0);
}