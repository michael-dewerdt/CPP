#include "PhoneBook.hpp"

int main(void)
{
    PhoneBook 	phonebook;
    Contact 	contact;

    std::string	index;
	int			i;
    int     	nb_of_contact;
    std::string input;

    std::cout<<"Welome on the PhoneBook!"<<std::endl;
    std::cout<<"Please enter your command: "<<std::endl;
    std::cout<<"- ADD: add a new contact"<<std::endl;
    std::cout<<"- SEARCH: search a contact"<<std::endl;
    std::cout<<"- EXIT: exit the program"<<std::endl;
    nb_of_contact = 0;
    while (input != "EXIT")
    {
        std::cin>>input;
        if (input == "ADD")
        {
            if(phonebook.full == 1)
            {
                std::cout<<"You're PhoneBook is full, do you want to remplace the oldest contact ? (y/n)"<<std::endl;
                std::cin>>input;
                if (input == "y")
                    i = 0;
                else if (input == "n")
                    continue;
                std::cout<<"Please enter the first name: "<<std::endl;
                contact.set_firstname();
                std::cout<<"Please enter the last name: "<<std::endl;
                contact.set_lastname();
                std::cout<<"Please enter the nickname: "<<std::endl;
                contact.set_lastname();
                std::cout<<"Please enter the phone number: "<<std::endl;
                contact.set_number();
                std::cout<<"Please enter the darkest secret: "<<std::endl;
                contact.set_darkestsecret();
                phonebook.add_contact(contact, i);
                i++;
                std::cout<<"contact added to the PhoneBook !"<<std::endl;
            }
        }
        else if (input == "SEARCH")
        {
            phonebook.display_all_contacts(); //list of 4 columns: index, first name, last name and nickname.
            std::cout<<"Please enter the number of the contact you want the informations: "<<std::endl;
			while(index[0] < '0' || index[0] > '8')
            	{
					std::cin>>index;
					if (index[0] < '0' || index[0] > '8')
                		std::cout<<"This contact does not exist"<<std::endl;
				}
			phonebook.display_one_contact(i);
        }
        else if (input != "SEARCH" && input != "ADD" && input != "EXIT")
            std::cout<<"This command does not exist, try ADD, SEARCH or EXIT."<<std::endl;
    }
    std::cout<< "PhoneBook OFF." << std::endl;
    return (0);
}



/*

input.c_str() 


• SEARCH:
◦ Each column must be 10 characters wide. A pipe character (’|’) separates
them. The text must be right-aligned. If the text is longer than the column,
it must be truncated and the last displayable character must be replaced by a
dot (’.’).
• EXIT
◦ The program quits and the contacts are lost forever!
• Any other input is discarded.
Once a command has been correctly executed, the program waits for another one. It
stops when the user inputs EXIT.
Give a relevant name to your executable.
*/