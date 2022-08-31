#include <iostream>
#include "contact.hpp"
#include "phonebook.hpp"

PhoneBook::PhoneBook(void)
{
    std::cout<<"============================================================"<<std::endl;
    std::cout<<"=     Welcome on the PhoneBook of Michael EA               ="<<std::endl;
    std::cout<<"=     Please, choose your command :                        ="<<std::endl;
    std::cout<<"=     ADD : Add a contact to the Phonebook                 ="<<std::endl;
    std::cout<<"=     SEARCH : Searching for a contact to the Phonebook    ="<<std::endl;
    std::cout<<"=     EXIT : Shut down this amazing program                ="<<std::endl;
    std::cout<<"============================================================"<<std::endl;
}

PhoneBook::~PhoneBook(void)
{
    std::cout<<"You have been disconnected."<<std::endl;
}

void    PhoneBook::search(int index)
{
    int tmp;
    std::cout<<" ====================CONTACTS======================="<<std::endl;
    for (int i = 0; i < index; i++)
    {
       this->contact[i].print_summary(i + 1);
    }
    std::cout<<" ==================================================="<<std::endl;
    std::cout<<"Choose the number of the contact you want to see : ";
    while(!(std::cin >> tmp) || tmp < 1 || tmp > index)
        {
            std::cout<<"Wrong number."<<std::endl;
            std::cout<<"Please choose the number of the contact you want to see : ";
        }
        this->contact[tmp - 1].print_all();
        std::cin.clear();
	    std::cin.ignore(10000,'\n');
}

void    PhoneBook::add_contact(Contact new_friend, int index)
{
    this->contact[index] = new_friend;
    std::cout<<"New contact added to the Phonebook !"<<std::endl;
}