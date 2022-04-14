/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 03:06:08 by agardet           #+#    #+#             */
/*   Updated: 2022/04/13 18:05:46 by agardet          ###   ########lyon.fr   */
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
        
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        int     toInt(void) const;
        float   toFloat(void) const;
        
    private:

        static int const _nFracBits = 8;
        int _value;
    
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif