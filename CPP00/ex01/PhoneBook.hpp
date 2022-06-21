#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
	public:
    	Contact contact[8];
    	int     full;

	void	add_contact(Contact contact, int i);
	void	display_all_contacts(PhoneBook Phonebook, int index);
	void	display_one_contact(int i);
};

#endif