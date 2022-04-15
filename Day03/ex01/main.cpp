/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 19:00:24 by agardet           #+#    #+#             */
/*   Updated: 2022/04/15 21:49:40 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int		main(void)
{
	ScavTrap	Scav("Tarkov");

	std::cout << std::endl;

	Scav.attack("PMC");
	Scav.takeDamage(10);
	Scav.beRepaired(3);
	Scav.guardGate();

	std::cout << std::endl;

	return (0);
}