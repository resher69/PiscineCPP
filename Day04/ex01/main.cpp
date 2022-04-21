/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet < agardet@student.42lyon.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 23:07:10 by agardet           #+#    #+#             */
/*   Updated: 2022/04/17 23:07:10 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"

int	main(void)
{
	{
	Animal*	animalPack[50];
	
	for( size_t i = 0; i < 2; i++ )
		animalPack[i] = new Dog();
	for( size_t i = 25; i < 27; i++ )
		animalPack[i] = new Cat();
	for( size_t i = 0; i < 4 ;i++ )
		delete( animalPack[i] );
	}
	{
	std::cout << std::endl << std::endl;
	Dog basic;
	{
	Dog tmp = basic;
	}
	}
	return 0;
}