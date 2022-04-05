/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet < agardet@student.42lyon.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 15:48:33 by agardet           #+#    #+#             */
/*   Updated: 2022/04/05 20:30:45 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <cstdlib>
#include "Contact.hpp"

class Phonebook 
{

    public:

    	Phonebook(void);
     	~Phonebook(void);

    void    addContact(Contact contact);
    void    searchContact(void) const;
    void    showBook(void) const;

    private:

    size_t _nbContact;
	Contact _Contact[8];
};

#endif