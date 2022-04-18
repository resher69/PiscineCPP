/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet < agardet@student.42lyon.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 21:56:40 by agardet           #+#    #+#             */
/*   Updated: 2022/04/17 22:42:33 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "Default FragTrap constructor call" << std::endl;
	return;
}

FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	this->_hitPoint = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap : " << this->_name << " created." << std::endl;
	return;
}

FragTrap::FragTrap(FragTrap const & src)
{
	*this = src;
	std::cout << "FragTrap : copy constructor call." << std::endl;
	return;
}


FragTrap::~FragTrap(void)
{
	std::cout << "Destructor FragTrap call." << std::endl;
	return;
}


FragTrap &	FragTrap::operator=(FragTrap const & rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoint = rhs._hitPoint;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return *this;
}


void	FragTrap::attack(const std::string & target)
{
	if (this->_hitPoint == 0 || this->_energyPoints == 0)
		return;
	std::cout << "FragTrap : " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage !" << std::endl;
	this->_energyPoints--;
	std::cout << "Energy left : " << this->_energyPoints << std::endl;
	return;
}

void	FragTrap::highFivesGuys(void) const
{
	if (this->_hitPoint > 0)
		std::cout << "Do you want to high fives ?" << std::endl;
	return;
}