#include "Contact.hpp"

Contact::Contact(void)
{
}
Contact::~Contact(void)
{
}

void Contact::print_info(int i)
{
        std::cout << std::setfill(' ') << std::setw(10) << i;
	    std::cout << " | ";
	    std::cout << std::setfill(' ') << std::setw(10) << firstname;
	    std::cout << " | ";
	    std::cout << std::setfill(' ') << std::setw(10) << lastname;
	    std::cout << " | ";
	    std::cout << std::setfill(' ') << std::setw(10) << nickname;
	    std::cout << " |";
	    std::cout << std::endl;
}

void    Contact::display_one_contact()
{
	std::cout << "First name: " << this->firstname << std::endl;
	std::cout << "Last name: " << this->lastname << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Postal address: " << this->address << std::endl;
	std::cout << "Email address: " << this->email << std::endl;
	std::cout << "Phone number: " << this->phonenumber << std::endl;
	std::cout << "Darkest secret: " << this->darkest_secret << std::endl;
}