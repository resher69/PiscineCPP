/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet < agardet@student.42lyon.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 21:54:20 by agardet           #+#    #+#             */
/*   Updated: 2022/04/09 21:54:20 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB 
{
    public:

	    HumanB(std::string name);
	    ~HumanB();

	    void	attack(void) const;
	    void	setWeapon( Weapon &weapon );

    private:

	    std::string	_name;
	    Weapon*		_weapon;
};

#endif