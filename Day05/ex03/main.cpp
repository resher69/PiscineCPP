#include <cstdlib>
#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int		main(void)
{
	Bureaucrat	Arnaud("Arnaud", 1);
	Intern		someRandomIntern;
	AForm*		form;
	

	form = someRandomIntern.makeForm("robotomy request", "Bender");
	Arnaud.signForm(*form);
	Arnaud.executeForm(*form);
	delete form;
	form = someRandomIntern.makeForm("world peace request", "World");
	delete form;
	form = someRandomIntern.makeForm("shrubbery creation", "gollum");
	Arnaud.signForm(*form);
	Arnaud.executeForm(*form);
	delete form;
	return (0);
}