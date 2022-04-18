#include <cstdlib>
#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int		main(void)
{
	Bureaucrat	dylan("Dylan", 1);
	Intern		someRandomIntern;
	AForm*		form;
	

	form = someRandomIntern.makeForm("robotomy request", "Bender");
	dylan.signForm(*form);
	dylan.executeForm(*form);
	delete form;
	form = someRandomIntern.makeForm("world peace request", "World");
	delete form;
	return (0);
}