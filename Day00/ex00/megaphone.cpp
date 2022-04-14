/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 15:29:40 by agardet           #+#    #+#             */
/*   Updated: 2022/04/13 12:18:36 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>

void	str_lower_to_upper(char *str)
{
	for (size_t i = 0; str[i]; i++)
		str[i] = std::toupper(str[i]);
	std::cout << str;
}
int main(int ac, char **av)
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		for (int i = 1; i < ac; i++)
			str_lower_to_upper(av[i]);
	std::cout << std::endl;
    return (EXIT_SUCCESS);
}