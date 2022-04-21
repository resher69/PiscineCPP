/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 17:02:19 by agardet           #+#    #+#             */
/*   Updated: 2022/04/21 17:25:41 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int		main( void )
{
	int array[7] = { 3, -1, 1, 1, 2, -4, 4 };
	char str[] = "bonjour";

	iter( array, 7, display );
	std::cout << std::endl;

	iter( str, 7, display );
	std::cout << std::endl;

	return ( EXIT_SUCCESS );
}