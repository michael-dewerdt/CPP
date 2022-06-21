#include "PhoneBook.hpp"



int main(int argc, char argv**)
{
    PhoneBook Phonebook;
    Contact contact;

    int        i;
    int     nb_of_contact;
    std::string input;
    cout<<"Welome on the PhoneBook!"<<endl;
    cout<<"Please enter your command: "<<endl;
    cout<<"- ADD: add a new contact"<<endl;
    cout<<"- SEARCH: search a contact"<<endl;
    cout<<"- EXIT: exit the program"<<endl;
    nb_of_contact = 0;
    while (input != "EXIT")
    {
        cin>>input;
        if (input == "ADD")
        {
            if(PhoneBook.full == 1)
            {
                cout<<"You're PhoneBook is full, do you want to remplace the oldest contact ? (y/n)"<<endl;
                cin>>input;
                if (input == 'y')
                    i = 0;
                if (input == 'n')
                    continue;
                cout<<"Please enter the first name: "<<endl;
                contact.set_firstname();
                cout<<"Please enter the last name: "<<endl;
                contact.set_lastname();
                cout<<"Please enter the nickname: "<<endl;
                contact.set_lastname();
                cout<<"Please enter the phone number: "<<endl;
                contact.set_number();
                cout<<"Please enter the darkest secret: "<<endl;
                contact.set_darkestsecret();
                Phonebook.add_contact(contact, i);
                i++;
                cout<<"contact added to the PhoneBook !"<<endl;
            }
        }
        else if (input == "SEARCH")
        {
            Phonebook.display_all_contacts(i); //list of 4 columns: index, first name, last name and nickname.
            cout<<"Please enter the number of the contact you want the informations: "<<endl;
            cin>>input;
            while(input < 0 || input > 8)
                cout<<"This contact does not exist"<<endl;
            Phonebook.display_one_contact(input);
        }
        else if (input != "SEARCH" || input != "ADD" || input != "EXIT")
            cout<<"This command does not exist, try ADD, SEARCH or EXIT."<<endl;
    }
    cout<< "PhoneBook OFF." << endl;
    return (0);
}
/*
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