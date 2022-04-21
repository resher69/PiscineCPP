#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
class Form;
# include "Bureaucrat.hpp"

class Form
{
	public :

		Form(std::string const name, unsigned short const signGrade, unsigned short const execGrade);
		Form(Form const & src);

		~Form(void);

		Form &	operator=(Form const & rhs);

		std::string const &		getName(void) const;
		unsigned short const &	getSignGrade(void) const;
		unsigned short const &	getExecGrade(void) const;
		bool					getState(void) const;

		class GradeTooHighException : public std::exception
		{
			public:
			
				virtual const char* what() const throw()
				{
					return ("Grade too high.");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
			
				virtual const char* what() const throw()
				{
					return ("Grade too low");
				}
		};

		void	beSigned(Bureaucrat const & bureaucrat);

	private :

		Form(void);

		std::string const		_name;
		unsigned short const	_signGrade;
		unsigned short const	_execGrade;
		bool					_signed;
};

std::ostream &	operator<<(std::ostream & o, Form const & i);


#endif