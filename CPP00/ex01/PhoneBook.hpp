#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
	public:

    	PhoneBook(void);
		~PhoneBook(void);
		
		Contact contact[8];
    	int     full;


	void	add_contact(Contact contact, int i);
	void	display_all_contacts();
	void	display_one_contact(int i);
};

#endif