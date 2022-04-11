/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet < agardet@student.42lyon.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 23:07:22 by agardet           #+#    #+#             */
/*   Updated: 2022/04/08 23:07:22 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie 
{

public:

	Zombie( std::string name );
	~Zombie();

	void	announce( void );
    
private:

	std::string	_name;
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif
