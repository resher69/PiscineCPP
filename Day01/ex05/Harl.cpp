/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 21:04:40 by agardet           #+#    #+#             */
/*   Updated: 2022/04/14 14:41:22 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

const Harl::__MatchLvlComp Harl::__CompTab[4] = {
	{"DEBUG", &Harl::debug_},
	{"INFO", &Harl::info_},
	{"WARNING", &Harl::warning_},
	{"ERROR", &Harl::error_},
};

Harl::Harl(void)
{
	return;
}

Harl::~Harl(void)
{
	return;
}

void	Harl::debug_(void) const
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
	std::cout << "I really do!" << std::endl;
}

void	Harl::info_(void) const
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn’t put enough bacon in my burger!" << std::endl; 
	std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning_(void) const
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error_(void) const
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level) const
{
	for (int i = 0; i < 4; i++)
	{
		if (level.compare(this->__CompTab[i]._level) == 0)
			(this->*__CompTab[i]._complainDisplay_)();
	}

	return;
}
