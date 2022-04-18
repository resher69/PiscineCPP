/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet < agardet@student.42lyon.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 23:42:05 by agardet           #+#    #+#             */
/*   Updated: 2022/04/17 23:42:05 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "aanimal.hpp"
#include "dog.hpp"
#include "cat.hpp"

int		main(void)
{
	// AAnimal*			Wut = new AAnimal(); // ne fonctionne pas
	AAnimal*			Rex = new Dog();
	AAnimal*			Leo = new Cat();

	std::cout << std::endl;

	// std::cout << Wut->getType() << " " << std::endl;
	// Wut->makeSound();
	std::cout << Rex->getType() << " " << std::endl;
	Rex->makeSound();
	std::cout << Leo->getType() << " " << std::endl;
	Leo->makeSound();
	
	std::cout << std::endl;

	// delete( Wut );
	delete(Rex);
	delete(Leo);

	return (0);
}