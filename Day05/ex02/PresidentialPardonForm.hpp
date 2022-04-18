#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <fstream>
# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	public:

		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const & src);

		virtual ~PresidentialPardonForm(void);

		PresidentialPardonForm &		operator=(PresidentialPardonForm const & rhs);
		
		virtual void		launch(void) const;

	private:
	
		PresidentialPardonForm(void);
};

#endif