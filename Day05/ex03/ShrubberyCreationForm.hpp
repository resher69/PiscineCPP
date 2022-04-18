#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <fstream>
# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	public:

		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const & src);

		virtual ~ShrubberyCreationForm(void);

		ShrubberyCreationForm &		operator=(ShrubberyCreationForm const & rhs);
		
		virtual void		launch(void) const;

	private:
	
		ShrubberyCreationForm(void);
};

#endif