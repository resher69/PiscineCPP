/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 20:51:58 by agardet           #+#    #+#             */
/*   Updated: 2022/04/18 20:57:18 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


   
#include <iostream>
#include "Bureaucrat.hpp"

int		main(void)
{
	try
	{
		Bureaucrat bob("Bob", 149);
		std::cout << bob << std::endl;
		bob.demote();
		std::cout << bob << std::endl;
		bob.demote();
		std::cout << bob << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Bureaucrat henry("Henry", 152);
		std::cout << henry << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Bureaucrat dylan("Dylan", 2);
		std::cout << dylan << std::endl;
		dylan.promote();
		std::cout << dylan << std::endl;
		dylan.promote();
		std::cout << dylan << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Bureaucrat marie("marie", 0);
		std::cout << marie << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return (0);
}