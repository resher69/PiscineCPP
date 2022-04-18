/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet < agardet@student.42lyon.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 22:47:28 by agardet           #+#    #+#             */
/*   Updated: 2022/04/17 22:47:28 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"


Animal::Animal(void)
{
	std::cout << "Animal Default constructor called" << std::endl;
	return;
}

Animal::Animal(Animal const & src)
{
	std::cout << "Animal Copy constructor called" << std::endl;
	*this = src;
	return;
}


Animal &		Animal::operator=(Animal const & rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}


Animal::~Animal(void)
{
	std::cout << "Animal Destructor called" << std::endl;
	return;
}


std::string	const	Animal::getType(void) const
{
	return this->type;
}


void	Animal::makeSound(void) const
{
	std::cout << "*animal sound*" << std::endl;
	return;
}
