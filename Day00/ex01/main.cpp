/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 12:19:31 by agardet           #+#    #+#             */
/*   Updated: 2022/04/13 14:23:15 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

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
    while(!std::cin.eof());

    return (0);
}