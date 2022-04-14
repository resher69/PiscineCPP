/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 03:15:32 by agardet           #+#    #+#             */
/*   Updated: 2022/04/12 04:23:05 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed(void) : _value(0)
{
	std::cout << "Default constructor called" << std::endl;

}

Fixed::Fixed(int const value) : _value(value << this->_nFracBits)
{
	std::cout << "Int constructor called" << std::endl;
	return;
}

Fixed::Fixed(float const value) : _value(roundf(value * (1 << this->_nFracBits)))
{
	std::cout << "Float constructor called" << std::endl;
	return;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;

}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;

	return;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;

	return;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;

	return this->_value;
}

Fixed &		Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = rhs.getRawBits();

	return *this;
}

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();

	return o;
}

int		Fixed::toInt(void) const
{
	return (this->_value >> this->_value);
}

float	Fixed::toFloat(void) const
{
	return((float)(this->_value) / (1 << this->_value));
}