#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Contact 
{
    public:
        Contact();
        ~Contact();
        Contact new_friend();
        bool    setFirstname(std::string firstname);
        bool    setLastname(std::string lastname);
        bool    setNickname(std::string nickname);
        bool    setPhoneNumber(std::string phonenumber);
        bool    setDarkestSecret(std::string darkestsecret);
        std::string	cut_len(std::string name);
        void    print_summary(int index);
        void    print_all(void);
    
        std::string firstname;
        std::string lastname;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
};

#endif

