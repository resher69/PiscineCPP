/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet < agardet@student.42lyon.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 23:41:41 by agardet           #+#    #+#             */
/*   Updated: 2022/04/17 23:41:41 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain Default Constructor called" << std::endl;
	return;
}

Brain::Brain(Brain const & src)
{
	std::cout << "Brain Copy Constructor called" << std::endl;
	*this = src;
	return;
}

Brain::~Brain(void)
{
	std::cout << "Brain Destructor called" << std::endl;
	return;
}

Brain &	Brain::operator=(Brain const & rhs)
{
	for (int i = 0; i < 100; i++)
	{
		this->_ideas[i] = rhs._ideas[i];
	}
	return *this;
}