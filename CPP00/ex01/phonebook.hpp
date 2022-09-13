#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "contact.hpp"
#include <iomanip>

using namespace std;

class PhoneBook
{
    public:
        PhoneBook(void);
        ~PhoneBook(void);
        
        Contact contact[7];
        void add_contact(Contact contact, int index);
        void search(int index);
};

#endif