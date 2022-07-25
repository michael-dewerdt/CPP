#include "PhoneBook.hpp"

void    display_all_contacts(PhoneBook Phonebook, int nb_of_contact);
{
    int i;
    for (int i = 0; i < nb_of_contact; i++)
    {
        std::cout << std::setfill(' ') << std::setw(10) << i;
	    std::cout << " | ";
	    std::cout << std::setfill(' ') << std::setw(10) << Phonebook[i].firstname;
	    std::cout << " | ";
	    std::cout << std::setfill(' ') << std::setw(10) << Phonebook[i].lastname;
	    std::cout << " | ";
	    std::cout << std::setfill(' ') << std::setw(10) << Phonebook[i].nickname;
	    std::cout << " |";
	    std::cout << std::endl;
    }
	if (nb_of_contact == 0) {
		std::cout << "No contact found" << std::endl;
		return ;
	}
    return;
}

void    display_one_contact(Contact contact, int i)
{
	std::cout << "First name: " << contact[i].firstname << std::endl;
	std::cout << "Last name: " << contact[i].lastname << std::endl;
	std::cout << "Nickname: " << contact[i].nickname << std::endl;
	std::cout << "Postal address: " << contact[i].address << std::endl;
	std::cout << "Email address: " << contact[i].email << std::endl;
	std::cout << "Phone number: " << contact[i].phonenumber << std::endl;
	std::cout << "Darkest secret: " << contact[i].darkest_secret << std::endl;
}

Contact get_info(void)
{
    Contact contact;

    std::cout<<"Please enter the first name: "<<std::endl;
    getline(std::cin, contact.firstname);
    std::cout<<"Please enter the last name: "<<std::endl;
    getline(std::cin, contact.lastname);
    std::cout<<"Please enter the nickname: "<<std::endl;
    getline(std::cin, contact.nickname);
    std::cout<<"Please enter the phone number: "<<std::endl;
    getline(std::cin, contact.phonenumber);
    std::cout<<"Please enter the darkest secret: "<<std::endl;
    getline(std::cin, contact.darkestsecret);
    return(contact);
}

int main(void)
{
    Contact 	contact[8];

    int	index;
	int			i;
    int     	nb_of_contact;
    std::string input;

    std::cout<<"Welome on the PhoneBook!"<<std::endl;
    std::cout<<"Please enter your command: "<<std::endl;
    std::cout<<"- ADD: add a new contact"<<std::endl;
    std::cout<<"- SEARCH: search a contact"<<std::endl;
    std::cout<<"- EXIT: exit the program"<<std::endl;
    nb_of_contact = 0;
    i = 0;
    while (input != "EXIT")
    {
        getline(std::cin, input);
        if (input == "ADD")
        {
            char answer;
            if(phonebook.full == 1)
            {
                std::cout<<"You're PhoneBook is full, do you want to remplace the oldest contact ? (y/n)"<<std::endl;
                getline(std::cin, answer);
                if (answer == "y")
                    i = 0;
                else
                    continue;
            }
            else
            {
                contact[i++] = get_info();
                std::cout<<"contact added to the PhoneBook !"<<std::endl;
            }
        }
        else if (input == "SEARCH")
        {
            display_all_contacts(friends, nb_of_contact); //list of 4 columns: index, first name, last name and nickname.
            std::cout<<"Please enter the number of the contact you want the informations: "<<std::endl;
            getline(std::cin, index);
            while(index < 0 || index > 8)
            	{
                	std::cout<<"This contact does not exist. Enter the right number."<<std::endl;
					getline(std::cin, index);
				}
			display_one_contact(friends[index]);
        }
        else if (input != "SEARCH" && input != "ADD" && input != "EXIT")
            std::cout<<"This command does not exist, try ADD, SEARCH or EXIT."<<std::endl;
        std::cout<<"Please enter your command: "<<std::endl;
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