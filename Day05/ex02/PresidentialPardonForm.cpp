
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

void	PresidentialPardonForm::launch(void) const
{
	    std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	return;
}