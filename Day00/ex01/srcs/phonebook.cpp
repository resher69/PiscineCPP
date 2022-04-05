/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet < agardet@student.42lyon.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 18:02:27 by agardet           #+#    #+#             */
/*   Updated: 2022/04/05 20:31:37 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook( void ) : _nbContact(0) {}

Phonebook::~Phonebook( void ) {}

void    showID(std::string field)
{
    size_t field_len = field.size();
    
    if (field_len < 10)
        field = field.insert(0, 10 - field_len, ' ');
    else if (field_len > 10)
    {
        field.resize(9);
        field += '.';
    }
    std::cout << field;
    std::cout << '|';
}

void    Phonebook::showBook(void) const
{
    Contact contact;
    size_t i = 0;
    
    while (i < this->_nbContact && i < 8)
    {
        contact = this->_Contact[i];
        std::cout << '|' << i + 1 << '|';
        showID(contact.getFirstName());
        showID(contact.getLastName());
        showID(contact.getNickname());
        std::cout << std::endl;
        i++;
    }
    
}
void    Phonebook::addContact(Contact Contact)
{
    this->_Contact[this->_nbContact % 8] = Contact;
    this->_nbContact++;
}

void    Phonebook::searchContact(void) const
{
    Contact     Contact;
    std::string input;
    size_t      index;

    if (!this->_nbContact)
    {
        std::cout << "You have no contacts, maybe eat a Curly!" << std::endl;
        return ;
    }
    this->showBook();
    std::cout << "Write your contact's index number to display his informations." << std::endl;
    while (getline(std::cin, input))
    {
        index = (size_t)strtol(input.c_str(), NULL, 10);
        if (index <= 0 || index > 8 || index > this->_nbContact)
            std::cout << "Value inccorect" << std::endl;
        else
        {
            Contact = this->_Contact[index - 1];
            Contact.printContactID(); 
            break ;
        }
    }  
}