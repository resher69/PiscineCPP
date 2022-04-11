/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet < agardet@student.42lyon.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 21:31:04 by agardet           #+#    #+#             */
/*   Updated: 2022/04/09 21:31:04 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main( void )
{
	std::string	str = "HI THIS IS BRAIN";

	std::string* stringPTR = &str;
	std::string& stringREF = str;

	std::cout << "str add : " << &str << std::endl;
	std::cout << "PTR add : " << stringPTR << std::endl;
	std::cout << "REF add : " << &stringREF << "\n" << std::endl;

	std::cout << "str val : " << str << std::endl;
	std::cout << "PTR val : " << *stringPTR << std::endl;
	std::cout << "REF val : " << stringREF << std::endl;

	return (0);
}