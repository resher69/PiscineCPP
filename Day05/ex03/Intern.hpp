#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	public:

		Intern(void);
		Intern(Intern const & src);

		~Intern(void);

		Intern &	operator=(Intern const & rhs);
		
		AForm *	makeForm(std::string formName, std::string target) const;

	private:
		
		std::string	_tabForm[3];
};

#endif