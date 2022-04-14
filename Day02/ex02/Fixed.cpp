/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:03:21 by agardet           #+#    #+#             */
/*   Updated: 2022/04/13 19:43:05 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed(void) : _value(0)
{
	std::cout << "Default constructor called" << std::endl;

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

int		Fixed::toInt(void) const
{
	return (this->_value >> this->_nFracBits);
}

float	Fixed::toFloat(void) const
{
	return((float)(this->_value) / (1 << this->_nFracBits));
}

std::ostream &	operator<<(std::ostream & o, Fixed const & i)
{
	o << i.toFloat();

	return o;
}

bool	Fixed::operator>(Fixed const & rhs) const
{
	return (this->_value > rhs._value);
}

bool	Fixed::operator<(Fixed const & rhs) const
{
	return (this->_value < rhs._value);
}

bool	Fixed::operator>=(Fixed const & rhs) const
{
	return (this->_value >= rhs._value);
}

bool	Fixed::operator<=(Fixed const & rhs) const
{
	return (this->_value <= rhs._value);
}

bool	Fixed::operator==(Fixed const & rhs) const
{
	return (this->getRawBits() == rhs.getRawBits());
}

bool	Fixed::operator!=(Fixed const & rhs) const
{
	return (this->getRawBits() != rhs.getRawBits());
}

Fixed	Fixed::operator+(Fixed const & rhs) const
{
	Fixed	res;

	res._value = this->_value + rhs._value; 
	return res;
}

Fixed	Fixed::operator-(Fixed const & rhs) const
{
	Fixed	res;

	res._value = this->_value - rhs._value; 
	return res;
}

Fixed	Fixed::operator*(Fixed const & rhs) const
{
	Fixed	res;

	res._value = this->_value * rhs._value >> _nFracBits; 
	return res;
}

Fixed	Fixed::operator/(Fixed const & rhs) const
{
	Fixed	res;

	res._value = this->_value * (1 << _nFracBits) / rhs._value; 
	return res;
}

Fixed &	Fixed::operator++(void)
{
	this->_value += 1;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);

	this->_value += 1;
	return tmp;
}

Fixed &	Fixed::operator--(void)
{
	this->_value -= 1;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);

	this->_value -= 1;
	return tmp;
}


Fixed &			Fixed::min( Fixed & lhs, Fixed &rhs )
{
	if (rhs < lhs)
		return rhs;
	else
		return lhs;
}

Fixed const &	Fixed::min( Fixed const & lhs, Fixed const &rhs )
{
	if (rhs < lhs)
		return rhs;
	else
		return lhs;
}

Fixed &			Fixed::max( Fixed & lhs, Fixed &rhs )
{
	if (rhs > lhs)
		return rhs;
	else
		return lhs;
}

Fixed const &	Fixed::max( Fixed const & lhs, Fixed const &rhs )
{
	if (rhs > lhs)
		return rhs;
	else
		return lhs;
}