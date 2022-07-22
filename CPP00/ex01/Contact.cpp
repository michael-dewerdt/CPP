#include "PhoneBook.hpp"

Contact::Contact(void)
{
}
Contact::~Contact(void)
{
}

void    Contact::set_firstname(void){
            std::getline(std::cin, this->firstname);}
void    Contact::set_lastname(void){
            std::getline(std::cin, this->lastname);}
void    Contact::set_nickname(void){
            std::getline(std::cin, this->nickname);}
void    Contact::set_number(void){
            std::getline(std::cin, this->number);}
void    Contact::set_darkestsecret(void){
            std::getline(std::cin, this->darkestsecret);}