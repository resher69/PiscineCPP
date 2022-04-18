#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
class AForm;
# include "Bureaucrat.hpp"

class AForm
{
	public :

		AForm(std::string const name, std::string const target, unsigned short const signGrade, unsigned short const execGrade);
		AForm(AForm const & src);

		virtual	~AForm(void);

		AForm &	operator=(AForm const & rhs);

		std::string const &		getName(void) const;
		std::string const &		getTarget(void) const;
		unsigned short const &	getSignGrade(void) const;
		unsigned short const &	getExecGrade(void) const;
		bool					getState(void) const;

		class GradeTooHighException : public std::exception
		{
			public:
			
				const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
			
				const char* what() const throw();
		};

		class FormNotSignedException : public std::exception
		{
			public:
			
				const char* what() const throw();
		};

		void			beSigned(Bureaucrat const & bureaucrat);
		void			execute(Bureaucrat const & executor) const;
		virtual void	launch(void) const = 0;

	protected :

		AForm(void);

	private :

		std::string const		_name;
		std::string const		_target;
		unsigned short const	_signGrade;
		unsigned short const	_execGrade;
		bool					_signed;
};

std::ostream &	operator<<(std::ostream & o, AForm const & i);

#endif