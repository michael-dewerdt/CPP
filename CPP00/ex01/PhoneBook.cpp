#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    for (int i = 0; i < 8; i++)
        this->contact[i] = NULL;
    this->full = 0;
}

PhoneBook::~PhoneBook(void)
{
    std::cout << "PhoneBook OFF." << std::endl;
}


void    add_contact(Contact contact, int i)
{
    this->contact[i] = contact;
    if (i = 7)
        this->full = 1;
}

void    display_all_contacts(int index)
{
    std::cout << "     index";
    std::cout << "|"
    std::cout << " firstname";
    std::cout << "|"
    std::cout << "  lastname";
    std::cout << "|"
    std::cout << "  nickname"; 
    std::cout << "|"
    for (int i = 0; i < index; i++)
    {
        std::cout << i << std::endl; 
        std::cout << this->contact[i].firstname << std::endl;
        std::cout << this->contact[i].lastname << std::endl;
        std::cout << this->contact[i].nickname << std::endl;
    }
	else if (index == 0) {
		std::cout << "No contact found" << std::endl;
		return ;
	}
	i++;
}

void    display_one_contact(int i)
{
	return ;
}
