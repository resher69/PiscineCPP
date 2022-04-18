/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 19:00:24 by agardet           #+#    #+#             */
/*   Updated: 2022/04/18 16:18:02 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int		main(void)
{
	ClapTrap mordor("Orc");
	ClapTrap mordorbis(mordor);

	std::cout << std::endl;

	mordorbis.takeDamage(1000);
	mordorbis.beRepaired(10); // Do nothing because 0 HP left
	mordor.attack("Gollum");
	mordor.attack("Gollum");
	mordor.attack("Gollum");
	mordor.attack("Gollum");
	mordor.attack("Gollum");
	mordor.takeDamage(5);
	mordor.beRepaired(1);
	mordor.beRepaired(1);
	mordor.beRepaired(1);
	mordor.beRepaired(1);
	mordor.beRepaired(1);
	mordor.attack("Gollum"); // Do nothing because 0 EP left
	mordor.attack("Gollum");
	mordor.takeDamage(1000);

	std::cout << std::endl;

	return (0);
}