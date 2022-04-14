/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 21:07:46 by agardet           #+#    #+#             */
/*   Updated: 2022/04/11 21:07:47 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Usage : ./Harl <nb time to randomly complain>" << std::endl;
		return (1);
	}
	
	int	nb_complains = std::atoi(av[1]);
	if (nb_complains < 0 || av[1][0] == '-')
	{
		std::cout << "<nb time to randomly complain> has to be a positive integer" << std::endl;
		return (1);
	}
	
	Harl	complainer;
	char *levels[4] = {(char *)"DEBUG", (char *)"INFO", (char *)"WARNING", (char *)"ERROR"}; 

	
	for (int i = 0; i < nb_complains; i++)
	{
		complainer.complain(levels[std::rand() % 4]);
	}
	return (0);
}