
#include "PresidentialPardonForm.hpp"

/* Constructors */

PresidentialPardonForm::PresidentialPardonForm(void) : AForm()
{
	return;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
			: AForm("PresidentialPardonForm", target, 25, 5)
{
	return;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : AForm(src)
{
	return;
}

/* Destructor */

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	return;
}

/* Overload */

PresidentialPardonForm &	PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	(void)rhs;
	return *this;
}

/* Utils */

void PrintPresidentialPardon(std::string const & target);

/* Member function */

void	PresidentialPardonForm::launch(void) const
{
	PrintPresidentialPardon(this->getTarget());
	return;
}