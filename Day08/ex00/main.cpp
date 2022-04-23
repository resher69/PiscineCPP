/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet < agardet@student.42lyon.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 23:01:06 by agardet           #+#    #+#             */
/*   Updated: 2022/04/23 23:01:06 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include <list>
#include <vector>
#include "easyfind.hpp"

int main(void)
{
	{
		std::vector<int>	tab;
		int					needle;

		for(size_t i = 0; i < 10; i++)
			tab.push_back(i);
		needle = 4;		
		try {
			std::cout << easyfind(tab, needle) << std::endl;
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << " " << needle << std::endl;
		}
		needle = 10;		
		try {
			std::cout << easyfind(tab, needle) << std::endl;
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << " " << needle << std::endl;
		}
	}
	{
		std::list<char>		tab;
		char				needle;

		for(size_t i = 'a'; i < 'h'; i++)
			tab.push_back(i);
		needle = 'f';		
		try {
			std::cout << static_cast<char>(easyfind(tab, needle)) << std::endl;
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << " " << needle << std::endl;
		}
		needle = 'x';		
		try {
			std::cout << easyfind(tab, needle) << std::endl;
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << " " << needle << std::endl;
		}
	}
	{
		std::list<char>		tab;
		char				needle;

		needle = 'f';		
		try {
			std::cout << static_cast<char>(easyfind(tab, needle)) << std::endl;
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}
	return (0);
}