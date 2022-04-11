/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet < agardet@student.42lyon.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 22:07:02 by agardet           #+#    #+#             */
/*   Updated: 2022/04/09 22:07:02 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string init_type) : _type(init_type) {}


Weapon::~Weapon() {}

std::string const & Weapon::getType(void) const
{
    return (this->_type);
}

void		Weapon::setType(std::string new_type)
{
	this->_type = new_type;
}