/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet < agardet@student.42lyon.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 21:09:35 by agardet           #+#    #+#             */
/*   Updated: 2022/04/09 21:09:35 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class Zombie
{
    public:
    
        Zombie();
        Zombie(std::string name);
        ~Zombie();

        void    announce(void) const;
        void    setName(std::string name);
    
    private:
        std::string _name;
};

Zombie*	zombieHorde( int N, std::string name );

#endif