/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet < agardet@student.42lyon.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 19:00:24 by agardet           #+#    #+#             */
/*   Updated: 2022/04/17 22:40:50 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int		main(void)
{
	ClapTrap Clap("Clap");
	ClapTrap TrapClap(Clap);

	std::cout << std::endl;

	TrapClap.takeDamage(1000);
	TrapClap.beRepaired(10); // Do nothing because 0 HP left
	Clap.attack("Gollum");
	Clap.attack("Gollum");
	Clap.attack("Gollum");
	Clap.attack("Gollum");
	Clap.attack("Gollum");
	Clap.takeDamage(5);
	Clap.beRepaired(1);
	Clap.beRepaired(1);
	Clap.beRepaired(1);
	Clap.beRepaired(1);
	Clap.beRepaired(1);
	Clap.attack("Gollum"); // Do nothing because 0 EP left
	Clap.attack("Gollum");
	Clap.takeDamage(1000);

	std::cout << std::endl;

	return (0);
}