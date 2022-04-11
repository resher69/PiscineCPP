/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet < agardet@student.42lyon.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 21:52:47 by agardet           #+#    #+#             */
/*   Updated: 2022/04/09 21:52:47 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA 
{
    public:

    	HumanA(std::string name, Weapon &weapon);
	    ~HumanA();

	    void	attack(void) const;

    private:

	    std::string	_name;
	    Weapon&		_weapon;
};

#endif