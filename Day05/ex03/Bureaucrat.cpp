#include "Bureaucrat.hpp"

/* Constructors */

Bureaucrat::Bureaucrat(void) /* not usable (Coplien form asked by subject) */
{
	return;
}

Bureaucrat::Bureaucrat(std::string const name, unsigned short grade) : _name(name)
{
	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	else if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else
		this->_grade = grade;
	return;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
	*this = src;
	return;
}

/* Destructor */

Bureaucrat::~Bureaucrat(void)
{
	return;
}

/* Overload */

Bureaucrat &	Bureaucrat::operator=(Bureaucrat const & rhs)
{
	this->_grade = rhs._grade;
	return *this;
}

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & i)
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade() << ".";
	return o;
}

/* Accessors */

std::string const &	Bureaucrat::getName(void) const
{
	return this->_name;
}

unsigned short		Bureaucrat::getGrade(void) const
{
	return this->_grade;
}

/* Exeptions */

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high.");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low.");
}

/* Member functions */

void	Bureaucrat::promote(void)
{
	if (this->_grade - 1 < 1)
		throw (Bureaucrat::GradeTooHighException());
	else
		this->_grade--;
	return;
}

void	Bureaucrat::demote(void)
{
	if (this->_grade + 1 > 150)
		throw (Bureaucrat::GradeTooLowException());
	else
		this->_grade++;
	return;
}

void	Bureaucrat::signForm(AForm & form) const
{
	try
	{
		form.beSigned(*this);
		std::cout << this->_name << " signed " << form.getName() << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << this->_name << " couldn't sign " << form.getName() << " because ";
		std::cout << e.what() << std::endl;
	}
	return;
}

void	Bureaucrat::executeForm(AForm const & form) const
{
	try
	{
		form.execute(*this);
		std::cout << this->_name << " executed " << form.getName() << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << this->_name << " couldn't execute " << form.getName() << " because ";
		std::cout << e.what() << std::endl;
	}
	return;
}