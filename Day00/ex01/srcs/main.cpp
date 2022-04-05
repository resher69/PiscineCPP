#include <phonebook.hpp>

int main(void)
{
    Phonebook   directory;
    std::string input;

    do
    {
        std::cout << "Type ADD  to add a contact, SEARCH to search into your directory or EXIT to exit." << std::endl;
        getline(std::cin, input);
        if (input == "ADD")
            directory.addContact(Contact::setContactID());
        else if (input == "SEARCH")
            directory.searchContact();
        else if (input == "EXIT")
            break ;
    }
    while(!std::cin.eof() && input.size());

    return (0);
}