#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact
{  
    public:

        std::string firstname;
		std::string lastname;
        std::string nickname;
        std::string number;
        std::string address;
        std::string email;
		std::string darkestsecret;

        void    set_firstname(void);
        void    set_lastname(void);
        void    set_nickname(void);
        void    set_number(void);
        void    set_darkestsecret(void);

    private:
};

#endif