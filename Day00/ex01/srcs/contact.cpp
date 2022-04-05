/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet < agardet@student.42lyon.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 15:53:33 by agardet           #+#    #+#             */
/*   Updated: 2022/04/05 20:31:23 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact( void ) {}

Contact::~Contact( void ) {}


void   get_input(std::string stdout, std::string *output)
{
    while (1)
    {
        std::cout << stdout;
        getline(std::cin, *output);
        if (!(output->empty()))
            break ;

        std::cout << "Field cannot be empty" << std::endl;
    }
}
Contact    Contact::setContactID(void)
{
    Contact contact;

    get_input("FirstName : ", &(contact._firstName));
    get_input("Lastname : ", &(contact._lastName));
    get_input("Nickname : ", &(contact._nickname));
    get_input("Phonenumber : ", &(contact._phoneNumber));
    get_input("DarkestSecret : ", &(contact._darkestSecret));
    std::cout << "Contact added" << std::endl;

    return (contact);

}

void    Contact::printContactID(void) const
{
    
    std::cout << "Firstname: " << getFirstName() << std::endl;
	std::cout << "Lastname: " << getLastName() << std::endl;
	std::cout << "Nickname: " << getNickname() << std::endl;
	std::cout << "Phonenumber: " << getPhoneNumber() << std::endl;
	std::cout << "DarkestSecret: " << getDarkestSecret() << std::endl;
}

std::string Contact::getFirstName( void ) const 
{
	return this->_firstName;
}

std::string Contact::getLastName( void ) const 
{
	return this->_lastName;
}

std::string Contact::getNickname( void ) const 
{
	return this->_nickname;
}

std::string Contact::getPhoneNumber( void ) const 
{
	return this->_phoneNumber;
}

std::string Contact::getDarkestSecret( void ) const 
{
	return this->_darkestSecret;
}