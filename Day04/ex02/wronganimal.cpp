/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wronganimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet < agardet@student.42lyon.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 23:41:17 by agardet           #+#    #+#             */
/*   Updated: 2022/04/17 23:41:17 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "wronganimal.hpp"

/* Constructors */

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal Default constructor called" << std::endl;
	return;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
	*this = src;
	return;
}

/* Overload operators */

WrongAnimal &		WrongAnimal::operator=(WrongAnimal const & rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

/* Destructor */

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal Destructor called" << std::endl;
	return;
}

/* Getters */

std::string	const	WrongAnimal::getType(void) const
{
	return this->type;
}

/* Methods */

void	WrongAnimal::makeSound(void) const
{
	std::cout << "*WrongAnimal sound*" << std::endl;
	return;
}
