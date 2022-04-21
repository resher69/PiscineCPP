/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 18:18:25 by agardet           #+#    #+#             */
/*   Updated: 2022/04/20 18:45:35 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include <stdint.h>
#include <string>

struct Data
{
	int age;
    std::string name;
};

uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr) );
}

Data*	deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int		main(void)
{
	Data*		ptr = new Data;
	uintptr_t	raw;

	std::cout << "Pointer value   = " << ptr << std::endl;
	raw = serialize( ptr );
	std::cout << "POINTER to UINT = " << raw << std::endl;
	ptr = deserialize( raw );
	std::cout << "UINT to POINTER = " << ptr << std::endl;
	delete(ptr);
	return (EXIT_SUCCESS);
}