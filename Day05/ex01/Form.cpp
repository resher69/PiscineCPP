#include "Form.hpp"

/* Constructors */

Form::Form(void) : _signGrade(150), _execGrade(150), _signed(false)
{
	return;
}

Form::Form(std::string const name, unsigned short const signGrade, unsigned short const execGrade)
			: _name(name), _signGrade(signGrade), _execGrade(execGrade), _signed(false)
{
	if (signGrade > 150 || execGrade > 150)
		throw (Form::GradeTooLowException());
	else if (signGrade < 1 || signGrade < 1)
		throw (Form::GradeTooHighException());
	return;
}

Form::Form(Form const & src) : _name(src._name), _signGrade(src._signGrade), _execGrade(src._execGrade), _signed(false)
{
	if (this->_signGrade > 150 || this->_execGrade > 150)
		throw (Form::GradeTooLowException());
	else if (this->_signGrade < 1 || this->_signGrade < 1)
		throw (Form::GradeTooHighException());
	return;
}

/* Destructor */

Form::~Form(void)
{
	return;
}

/* Overload */

Form &	Form::operator=(Form const & rhs)
{
	this->_signed = rhs._signed;
	return *this;
}

std::ostream &	operator<<(std::ostream & o, Form const & i)
{
	o << "Form : " << i.getName() << ", sign grade : " << i.getSignGrade() << ", exec grade : " << i.getExecGrade() << ", state : " << (i.getState() ? " is signed." : " is not signed." );
	return o;
}

/* Accessors */

std::string const &		Form::getName(void) const
{
	return this->_name;
}

unsigned short const &	Form::getSignGrade(void) const
{
	return this->_signGrade;
}

unsigned short const &	Form::getExecGrade(void) const
{
	return this->_execGrade;
}

bool					Form::getState(void) const
{
	return this->_signed;
}

/* Exeptions */

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high.");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low.");
}

/* Member functions */

void	Form::beSigned(Bureaucrat const & bureaucrat)
{
	if (bureaucrat.getGrade() > this->_signGrade)
		throw (Form::GradeTooLowException());
	else
		this->_signed = true;
	return;
}
