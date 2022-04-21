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

/* Member function */

void	ShrubberyCreationForm::launch(void) const
{
	std::ofstream	ofs;
	std::string		file = this->getTarget() + "_shrubbery";
	try
	{
		ofs.open(file.c_str(), std::ios_base::out | std::ios_base::trunc);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	ofs 
<< "               ,@@@@@@@," << std::endl \
<< "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl \
<< "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl \
<< "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl \
<< "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl \
<< "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl \
<< "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl \
<< "       |o|        | |         | |" << std::endl \
<< "       |.|        | |         | |" << std::endl \
<< "    \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_";
	ofs.close();
	return;
}