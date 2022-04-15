/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 21:00:24 by agardet           #+#    #+#             */
/*   Updated: 2022/04/15 21:35:25 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"



class ScavTrap : public ClapTrap
{
    public :

        ScavTrap(std::string name);
        ScavTrap(ScavTrap const & src);
        ~ScavTrap(void);
        
        ScavTrap & operator=(ScavTrap const & rhs);
        
        void    attack(const std::string & target);
        void    guardGate(void) const;

    private :

        ScavTrap(void);
};

#endif