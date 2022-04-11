/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet < agardet@student.42lyon.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 21:20:44 by agardet           #+#    #+#             */
/*   Updated: 2022/04/09 21:20:44 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *horde;
    int N = 50;
    horde = zombieHorde(N, "Gollum");
    for (int i = 0; i < N; i++)
        horde->announce();
    delete [] horde;

    return (0);
}