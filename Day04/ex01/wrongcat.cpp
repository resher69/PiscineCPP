/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongcat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet < agardet@student.42lyon.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 22:55:12 by agardet           #+#    #+#             */
/*   Updated: 2022/04/17 22:55:12 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "wrongcat.hpp"


WrongCat::WrongCat(void) : WrongAnimal()
{
	std::cout << "WrongCat Default constructor called" << std::endl;
	this->type = "WrongCat";
	return;
}

WrongCat::WrongCat(WrongCat const & src) : WrongAnimal(src)
{
	std::cout << "WrongCat Copy constructor called" << std::endl;
	*this = src;
	return;
}


WrongCat &		WrongCat::operator=(WrongCat const & rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}


WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat Destructor called" << std::endl;
	return;
}


void	WrongCat::makeSound(void) const
{
	std::cout << "*MEOOOOOOOW*" << std::endl;
	return;
}
