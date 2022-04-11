/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet < agardet@student.42lyon.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 21:36:18 by agardet           #+#    #+#             */
/*   Updated: 2022/04/09 21:36:18 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

 #ifndef WEAPON_HPP
 # define WEAPON_HPP

 #include <iostream>
 
 class Weapon
 {
     public :

        Weapon(std::string type);
        ~Weapon();

        std::string const & getType(void) const;
        void    setType(std::string type);

     private :

        std::string _type;

 };

 #endif
 