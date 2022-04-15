/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 21:00:22 by agardet           #+#    #+#             */
/*   Updated: 2022/04/15 21:51:14 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
    std::cout << "Default ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    this->_name = name;
    this->_hitPoint = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap : " << this->_name << " created" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
    std::cout << " ScavTrap : copy constructor called" << std::endl;
    *this = src;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap : Destructor called" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
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

void    ScavTrap::attack(const std::string & target)
{
    if (this->_hitPoint == 0 || this ->_energyPoints == 0)
        return ;
    std::cout << "ScavTrap : " << this->_name << " attacks" << target << " causing" << this->_attackDamage << " points of damage !" << std::endl;
    this->_energyPoints--;
    std::cout << "Energy left :" << this->_energyPoints << std::endl;
}

void    ScavTrap::guardGate(void) const
{
    if (this->_hitPoint > 0)
        std::cout << "ScavTrap : " << this->_name << " went gate keeper mode" << std::endl;
}