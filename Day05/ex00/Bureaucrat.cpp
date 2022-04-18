/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 20:51:56 by agardet           #+#    #+#             */
/*   Updated: 2022/04/18 20:55:13 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
	return;
}

Bureaucrat::Bureaucrat(std::string const name, unsigned short grade) : _name(name), _grade(150)
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


Bureaucrat::~Bureaucrat(void)
{
	return;
}


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


std::string const &	Bureaucrat::getName(void) const
{
	return this->_name;
}

unsigned short		Bureaucrat::getGrade(void) const
{
	return this->_grade;
}


const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high.");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low.");
}


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