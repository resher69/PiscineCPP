/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 21:55:29 by agardet           #+#    #+#             */
/*   Updated: 2022/04/15 21:55:33 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public :

		FragTrap(std::string name);
		FragTrap(FragTrap const & src);

		~FragTrap(void);

		FragTrap &	operator=(FragTrap const & rhs);
		
		void	attack(const std::string & target);
		void	highFivesGuys(void) const;

	private :

		FragTrap(void);
};

#endif