#include "ShrubberyCreationForm.hpp"

/* Constructors */

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm()
{
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
			: AForm("ShrubberyCreationForm", target, 145, 137)
{
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : AForm(src)
{
	return;
}

/* Destructor */

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return;
}

/* Overload */

ShrubberyCreationForm &	ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	(void)rhs;
	return *this;
}

/* Utils */

void	grow(int time_grow, std::ofstream & ofs);

/* Member function */

void	ShrubberyCreationForm::launch(void) const
{
	std::ofstream	ofs;
	std::string		file = this->getTarget() + "_shrubbery";
	try
	{
		ofs.open(file.c_str(), std::ios_base::out | std::ios_base::trunc);
		grow(10, ofs);
		std::cout << "You can find this shrubbery in current dir under name of : ";
		std::cout << file << " !" << std::endl;
		ofs.close();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return;
}