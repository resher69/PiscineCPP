/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongcat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet < agardet@student.42lyon.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 22:54:54 by agardet           #+#    #+#             */
/*   Updated: 2022/04/17 22:54:54 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include "wronganimal.hpp"

class	WrongCat : public WrongAnimal
{
	public :

		WrongCat(void);
		WrongCat(WrongCat const & src);

		virtual ~WrongCat(void);

		WrongCat & operator=(WrongCat const & rhs);

		void	makeSound(void) const;
};

#endif