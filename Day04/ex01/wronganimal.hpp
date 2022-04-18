/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wronganimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet < agardet@student.42lyon.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 22:55:32 by agardet           #+#    #+#             */
/*   Updated: 2022/04/17 22:55:32 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class	WrongAnimal
{
	public :

		WrongAnimal(void);
		WrongAnimal(WrongAnimal const & src);

		virtual ~WrongAnimal(void);

		WrongAnimal & operator=(WrongAnimal const & rhs);
		
		std::string const	getType(void) const;

		void		makeSound(void) const;

	protected :

		std::string	type;
};

#endif