#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{  
    public:

		Contact(void);
		~Contact(void);
        void print_info(int i);
        void display_one_contact(void);
	
        std::string firstname;
		std::string lastname;
        std::string nickname;
        std::string phonenumber;
        std::string address;
        std::string email;
		std::string darkestsecret;
};


#endif