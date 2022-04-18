/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet < agardet@student.42lyon.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 22:45:53 by agardet           #+#    #+#             */
/*   Updated: 2022/04/17 22:45:53 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class	Animal
{
	public :

		Animal(void);
		Animal(Animal const & src);

		virtual ~Animal(void);

		Animal & operator=(Animal const & rhs);
		
		std::string const	getType(void) const;

		virtual void		makeSound(void) const;

	protected :

		std::string	type;
};

#endif