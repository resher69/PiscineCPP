/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:03:28 by agardet           #+#    #+#             */
/*   Updated: 2022/04/13 18:48:36 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class   Fixed
{
    public :
    
        Fixed(void);
        Fixed(int const value);
        Fixed(float const value);
        Fixed(Fixed const & src);
        ~Fixed(void);
        
        Fixed &	operator=(Fixed const & rhs);
        
        bool	operator>(Fixed const & rhs) const;
		bool	operator<(Fixed const & rhs) const;
		bool	operator>=(Fixed const & rhs) const;
		bool	operator<=(Fixed const & rhs) const;
		bool	operator==(Fixed const & rhs) const;
		bool	operator!=(Fixed const & rhs) const;

		Fixed	operator+(Fixed const & rhs) const;
		Fixed	operator-(Fixed const & rhs) const;
		Fixed	operator*(Fixed const & rhs) const;
		Fixed	operator/(Fixed const & rhs) const;

		Fixed &	operator++(void);
		Fixed	operator++(int);
		Fixed &	operator--(void);
		Fixed	operator--(int);
        
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        int     toInt(void) const;
        float   toFloat(void) const;

        static Fixed &			min( Fixed & lhs, Fixed &rhs );
		static Fixed const &	min( Fixed const & lhs, Fixed const &rhs );
		static Fixed &			max( Fixed & lhs, Fixed &rhs );
		static Fixed const &	max( Fixed const & lhs, Fixed const &rhs );
        
    private:

        static int const _nFracBits = 8;
        int _value;
    
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif