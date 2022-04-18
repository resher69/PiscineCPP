/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet < agardet@student.42lyon.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 23:41:57 by agardet           #+#    #+#             */
/*   Updated: 2022/04/17 23:41:57 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"


Dog::Dog(void) : AAnimal()
{
	std::cout << "Dog Default constructor called" << std::endl;
	this->type = "Dog";
	this->_brain = new Brain();
	return;
}

Dog::Dog(Dog const & src) : AAnimal(src)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	*this = src;
	return;
}


Dog &		Dog::operator=(Dog const & rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.type;
		delete (this->_brain);
		this->_brain = new Brain(*rhs._brain);
	}
	return *this;
}


Dog::~Dog(void)
{
	std::cout << "Dog Destructor called" << std::endl;
	delete this->_brain;
	return;
}


void	Dog::makeSound(void) const
{
	std::cout << "*Wouf*" << std::endl;
	return;
}
