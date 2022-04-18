#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
class Bureaucrat;
# include "AForm.hpp"

class	Bureaucrat
{
	public :

		Bureaucrat(std::string const name, unsigned short grade);
		Bureaucrat(Bureaucrat const & src);

		~Bureaucrat(void);

		Bureaucrat &	operator=(Bureaucrat const & rhs);

		std::string	const &	getName(void) const;
		unsigned short		getGrade(void) const;
		
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

		void	promote(void);
		void	demote(void);
		void	signForm(AForm & form) const;
		void	executeForm(AForm const & form) const;

	private :

		Bureaucrat(void);

		const std::string	_name;
		unsigned short		_grade;				
};

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & i);

#endif