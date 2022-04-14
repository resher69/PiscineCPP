/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 19:00:24 by agardet           #+#    #+#             */
/*   Updated: 2022/04/13 19:15:39 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int		main(void)
{
	ClapTrap boby("Boby");
	ClapTrap bobySon(boby);

	std::cout << std::endl;

	bobySon.takeDamage(1000);
	bobySon.beRepaired(10); // Do nothing because 0 HP left
	boby.attack("Great Bullymong");
	boby.attack("Great Bullymong");
	boby.attack("Great Bullymong");
	boby.attack("Great Bullymong");
	boby.attack("Great Bullymong");
	boby.takeDamage(5);
	boby.beRepaired(1);
	boby.beRepaired(1);
	boby.beRepaired(1);
	boby.beRepaired(1);
	boby.beRepaired(1);
	boby.attack("Great Bullymong"); // Do nothing because 0 EP left
	boby.attack("Great Bullymong");
	boby.takeDamage(1000);

	std::cout << std::endl;

	return (0);
}