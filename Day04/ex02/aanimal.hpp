/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aanimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet < agardet@student.42lyon.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 23:41:37 by agardet           #+#    #+#             */
/*   Updated: 2022/04/17 23:41:37 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include "brain.hpp"

class	AAnimal
{
	public :

		AAnimal(void);
		AAnimal(AAnimal const & src);

		virtual ~AAnimal(void);

		AAnimal &	operator=(AAnimal const & rhs);
		
		std::string const	getType(void) const;

		virtual void		makeSound(void) const = 0;

	protected :

		std::string	type;
};

#endif