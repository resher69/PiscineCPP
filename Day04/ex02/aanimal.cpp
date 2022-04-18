/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aanimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet < agardet@student.42lyon.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 23:39:31 by agardet           #+#    #+#             */
/*   Updated: 2022/04/17 23:39:31 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "aanimal.hpp"


AAnimal::AAnimal(void)
{
	std::cout << "AAnimal Default constructor called" << std::endl;
	return;
}

AAnimal::AAnimal(AAnimal const & src)
{
	std::cout << "AAnimal Copy constructor called" << std::endl;
	*this = src;
	return;
}


AAnimal &		AAnimal::operator=(AAnimal const & rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}


AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal Destructor called" << std::endl;
	return;
}


std::string	const	AAnimal::getType(void) const
{
	return this->type;
}


void	AAnimal::makeSound(void) const
{
	std::cout << "*aanimal sound*" << std::endl;
	return;
}
