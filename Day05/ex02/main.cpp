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
		Bureaucrat gollum("gollum", 120);

		ShrubberyCreationForm shrubbery("salon");
		gollum.signForm(shrubbery);
		gollum.executeForm(shrubbery);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Bureaucrat azog("azog", 46);

		RobotomyRequestForm robotomy("Darth Vader");
		azog.signForm(robotomy);
		azog.executeForm(robotomy);
		azog.promote();
		std::cout << "azog has been promoted." << std::endl;
		azog.executeForm(robotomy);
		azog.demote();
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
		Bureaucrat gollum("gollum", 6);

		PresidentialPardonForm pardon("Jim");
		gollum.executeForm(pardon);
		std::cout << gollum.getName() << " is horrified that he couldn't exec that form, he's going to pledge for promotion !" << std::endl;
		gollum.promote();
		std::cout << "gollum has been promoted." << std::endl;
		gollum.executeForm(pardon);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return (EXIT_SUCCESS);
}