/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet < agardet@student.42lyon.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 22:53:47 by agardet           #+#    #+#             */
/*   Updated: 2022/04/17 22:53:47 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"

Dog::Dog(void) : Animal()
{
	std::cout << "Dog Default constructor called" << std::endl;
	this->type = "Dog";
	return;
}

Dog::Dog(Dog const & src) : Animal(src)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	*this = src;
	return;
}

Dog &		Dog::operator=(Dog const & rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}


Dog::~Dog(void)
{
	std::cout << "Dog Destructor called" << std::endl;
	return;
}


void	Dog::makeSound(void) const
{
	std::cout << "*Wouf*" << std::endl;
	return;
}
