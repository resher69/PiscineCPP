/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet < agardet@student.42lyon.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 22:50:03 by agardet           #+#    #+#             */
/*   Updated: 2022/04/17 22:50:03 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"


Cat::Cat(void) : Animal()
{
	std::cout << "Cat Default constructor called" << std::endl;
	this->type = "Cat";
	return;
}

Cat::Cat(Cat const & src) : Animal(src)
{
	std::cout << "Cat Copy constructor called" << std::endl;
	*this = src;
	return;
}


Cat &		Cat::operator=(Cat const & rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}


Cat::~Cat(void)
{
	std::cout << "Cat Destructor called" << std::endl;
	return;
}


void	Cat::makeSound(void) const
{
	std::cout << "*MEOOOOOOOOOOOW*" << std::endl;
	return;
}
