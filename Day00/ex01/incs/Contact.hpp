#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact 
{

    public:

        Contact(void);
        ~Contact(void);

        static  Contact    setContactID(void);
        void    printContactID(void) const;
        std::string	getFirstName(void) const;
	    std::string	getLastName(void) const;
	    std::string	getNickname(void) const;
	    std::string	getPhoneNumber(void) const;
	    std::string	getDarkestSecret(void) const;

    private:

		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_phoneNumber;
		std::string	_darkestSecret;
};

#endif