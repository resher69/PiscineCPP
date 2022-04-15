/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 19:00:23 by agardet           #+#    #+#             */
/*   Updated: 2022/04/15 21:50:59 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("Default"), _hitPoint(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << this->_name << " created." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoint(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << this->_name << " created." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap : Destructor called" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
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

void    ClapTrap::attack(const std::string & target)
{
    if (this->_hitPoint == 0 || this->_energyPoints == 0)
        return ;
    std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " point of damage" << std::endl;
    this->_energyPoints--;
    std::cout << "Energy left : " << this->_energyPoints << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoint == 0)
        return ;
    if (amount > this->_hitPoint)
        this->_hitPoint = 0;
    else
        this->_hitPoint -= amount;
    std::cout << "ClapTrap " << this->_name << " takes " << amount << " damage." << std::endl;
    std::cout << "HP left : " << this->_hitPoint << std::endl;
    return;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hitPoint == 0 || this->_energyPoints == 0)
        return ;
    this->_energyPoints--;
    this->_hitPoint += amount;
    std::cout << "ClapTrap " << this->_name << " heals himself for " << amount << " HP." << std::endl;
    std::cout << "Current HP : " << this->_hitPoint << std::endl;
}