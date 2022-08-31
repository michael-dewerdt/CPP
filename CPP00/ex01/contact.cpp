#include <iostream>
#include "contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

Contact    Contact::new_friend(void)
{
    Contact new_contact;
    std::string tmp;

    std::cout << "Fill the information about your new contact :"<<std::endl;

    std::cout << "- Firstname :";
    getline(std::cin, tmp);
    new_contact.setFirstname(tmp);
    std::cout << "- Lastname :";
    std::getline(std::cin, tmp);
    new_contact.setLastname(tmp);
    std::cout << "- Nickname :";
    std::getline(std::cin, tmp);
    new_contact.setNickname(tmp);
    std::cout << "- Phone Number :";
    std::getline(std::cin, tmp);
    new_contact.setPhoneNumber(tmp);
    std::cout << "- Darkest secret :";
    std::getline(std::cin, tmp);
    new_contact.setDarkestSecret(tmp);
    return (new_contact);
}

std::string	Contact::cut_len(std::string name)
{
	if (name.length() >= 10)
		name = name.substr(0, 9).append(".");
	return (name);
}

void    Contact::print_all()
{
    std::cout << std::endl;
    std::cout<<"============================CONTACT============================="<<std::endl;
	std::cout << "First name: " << this->firstname << std::endl;
	std::cout << "Last name: " << this->lastname << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Phone number: " << this->phone_number << std::endl;
	std::cout << "Darkest secret: " << this->darkest_secret << std::endl;
    std::cout<<"================================================================"<<std::endl;
	std::cout << std::endl;
}

void    Contact::print_summary(int index)
{   std::cout << "| ";
    std::cout << std::setfill(' ') << std::setw(10) << index;
	std::cout << " | ";
	std::cout << std::setfill(' ') << std::setw(10) << cut_len(this->firstname);
	std::cout << " | ";
	std::cout << std::setfill(' ') << std::setw(10) << cut_len(this->lastname);
	std::cout << " | ";
	std::cout << std::setfill(' ') << std::setw(10) << cut_len(this->nickname);
	std::cout << " | ";
	std::cout << std::endl;
}

bool    Contact::setFirstname(std::string name)
{
    this->firstname = name;
    return (true);
}

bool    Contact::setLastname(std::string name)
{
    this->lastname = name;
    return (true);
}

bool    Contact::setNickname(std::string name)
{
    this->nickname = name;
    return (true);
}

bool    Contact::setPhoneNumber(std::string name)
{
    this->phone_number = name;
    return (true);
}

bool    Contact::setDarkestSecret(std::string name)
{
    this->darkest_secret = name;
    return (true);
}