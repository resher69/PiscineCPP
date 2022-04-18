#include <cstdlib>
#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int		main(void)
{
	try
	{
		Bureaucrat Dwight("Dwight", 120);

		ShrubberyCreationForm shrubbery("salon");
		Dwight.signForm(shrubbery);
		Dwight.executeForm(shrubbery);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Bureaucrat palpatine("Palpatine", 46);

		RobotomyRequestForm robotomy("Darth Vader");
		palpatine.signForm(robotomy);
		palpatine.executeForm(robotomy);
		palpatine.promote();
		std::cout << "palpatine has been promoted." << std::endl;
		palpatine.executeForm(robotomy);
		palpatine.demote();
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Bureaucrat god("God", 1);

		PresidentialPardonForm pardon("Satan");
		god.signForm(pardon);
		god.executeForm(pardon);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Bureaucrat Dwight("Dwight", 6);

		PresidentialPardonForm pardon("Jim");
		Dwight.executeForm(pardon);
		std::cout << Dwight.getName() << " is horrified that he couldn't exec that form, he's going to pledge for promotion !" << std::endl;
		Dwight.promote();
		std::cout << "Dwight has been promoted." << std::endl;
		Dwight.executeForm(pardon);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return (EXIT_SUCCESS);
}