/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 21:57:54 by agardet           #+#    #+#             */
/*   Updated: 2022/04/21 15:56:35 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <climits>
#include <cfloat>

int		main( int ac, char** av )
{
	if ( ac != 2 )
	{
		std::cout << "Usage: ./convert <litteral_to_cast>" << std::endl;
		return ( EXIT_FAILURE );
	}

	double  d = std::atof(av[1]);
	int		i = static_cast<int>(d);
	float	f = static_cast<float>(d);
	char    c = static_cast<char>(d);

	std::cout << std::fixed << std::setprecision(1);

//	Print CHAR
	if (d > CHAR_MAX || d < CHAR_MIN || d != d)
		std::cout << "char: impossible" << std::endl;
	else if ( std::isprint( c ) )
		std::cout << "char: '" << c << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;

//	Print INT
	if (d > INT_MAX || d < INT_MIN  || d != d)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << i << std::endl;

//	Print FLOAT
	if ( f == 0)
		std::cout << "float: 0.0f" << std::endl;
	else if (f != f)
		std::cout << "float: nanf" << std::endl;
	else if (d > FLT_MAX)
		std::cout << "float: inff" << std::endl;
	else if (d < -FLT_MAX)
		std::cout << "float: -inff" << std::endl;
	else
		std::cout << "float: " << f << "f" << std::endl;

//	Print DOUBLE
	std::cout << "double: " << d << std::endl;

	return ( EXIT_SUCCESS );
}