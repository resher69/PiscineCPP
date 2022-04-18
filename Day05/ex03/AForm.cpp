#include "AForm.hpp"

/* Constructors */

AForm::AForm(void) : _signGrade(150), _execGrade(150), _signed(false)
{
	return;
}

AForm::AForm(std::string const name, std::string const target, unsigned short const signGrade, unsigned short const execGrade)
			: _name(name), _target(target),_signGrade(signGrade), _execGrade(execGrade), _signed(false)
{
	if (signGrade > 150 || execGrade > 150)
		throw (AForm::GradeTooLowException());
	else if (signGrade < 1 || signGrade < 1)
		throw (AForm::GradeTooHighException());
	return;
}

AForm::AForm(AForm const & src) : _name(src._name), _target(src._target), _signGrade(src._signGrade), _execGrade(src._execGrade), _signed(false)
{
	if (this->_signGrade > 150 || this->_execGrade > 150)
		throw (AForm::GradeTooLowException());
	else if (this->_signGrade < 1 || this->_signGrade < 1)
		throw (AForm::GradeTooHighException());
	return;
}

/* Destructor */

AForm::~AForm(void)
{
	return;
}

/* Overload */

AForm &	AForm::operator=(AForm const & rhs)
{
	this->_signed = rhs._signed;
	return *this;
}

std::ostream &	operator<<(std::ostream & o, AForm const & i)
{
	o << "AForm : " << i.getName() << ", sign grade : " << i.getSignGrade() << ", exec grade : " << i.getExecGrade() << ", state : " << (i.getState() ? " is signed." : " is not signed." );
	return o;
}

/* Accessors */

std::string const &		AForm::getName(void) const
{
	return this->_name;
}

std::string const &		AForm::getTarget(void) const
{
	return this->_target;
}

unsigned short const &	AForm::getSignGrade(void) const
{
	return this->_signGrade;
}

unsigned short const &	AForm::getExecGrade(void) const
{
	return this->_execGrade;
}

bool					AForm::getState(void) const
{
	return this->_signed;
}

/* Exeptions */

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high.");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low.");
}

const char* AForm::FormNotSignedException::what() const throw()
{
	return ("Form not signed.");
}

/* Member functions */

void	AForm::beSigned(Bureaucrat const & bureaucrat)
{
	if (bureaucrat.getGrade() > this->_signGrade)
		throw (AForm::GradeTooLowException());
	else
		this->_signed = true;
	return;
}

void	AForm::execute(Bureaucrat const & bureaucrat) const
{
	if (bureaucrat.getGrade() > this->_execGrade)
		throw (AForm::GradeTooLowException());
	else if (this->_signed == false)
		throw (AForm::FormNotSignedException());
	else
		this->launch();
	return;
}
