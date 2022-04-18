#include "Intern.hpp"

/* Constructors */

Intern::Intern(void)
{
	this->_tabForm[0] = "shrubbery creation";
	this->_tabForm[1] = "robotomy request";
	this->_tabForm[2] = "presidential pardon";
	return;
}

Intern::Intern(Intern const & src)
{
	(void)src;
	return;
}

/* Destructor */

Intern::~Intern(void)
{
	return;
}

/* Overload */

Intern &	Intern::operator=(Intern const & rhs)
{
	(void)rhs;
	return *this;
}

/* Member function */

AForm*		Intern::makeForm(std::string formName, std::string target) const
{
	size_t i = 0;
	
	while (i < 3 && formName.compare(_tabForm[i]))
		i++;
	switch (i)
	{
		case 0:
			std::cout << "Intern creates " << formName << "." << std::endl;
			return (new ShrubberyCreationForm(target));
		case 1:
			std::cout << "Intern creates " << formName << "." << std::endl;
			return (new RobotomyRequestForm(target));
		case 2:
			std::cout << "Intern creates " << formName << "." << std::endl;
			return (new PresidentialPardonForm(target));
		default:
			std::cout << "Intern can't create form because : No form named : " << formName << "." << std::endl;
			break ;
	}
	return (NULL);
}