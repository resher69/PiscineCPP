/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 19:00:22 by agardet           #+#    #+#             */
/*   Updated: 2022/04/13 19:37:54 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    public:

        ClapTrap(std::string name);
        ClapTrap(ClapTrap const & src);
        ~ClapTrap();

        ClapTrap & operator=(ClapTrap const & rhs);

        void    attack (const std::string & target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);

    private:

        ClapTrap(void);

        std::string     _name;
        unsigned int    _hitPoint;
        unsigned int    _energyPoints;
        unsigned int    _attackDamage;    
};

#endif