/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 19:00:24 by agardet           #+#    #+#             */
/*   Updated: 2022/04/15 21:59:28 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int		main(void)
{
	FragTrap	Frag("Frag360noscope");

	std::cout << std::endl;

	Frag.attack("Noob");
	Frag.takeDamage(40);
	Frag.beRepaired(10);
	Frag.highFivesGuys();

	std::cout << std::endl;

	return (0);
}