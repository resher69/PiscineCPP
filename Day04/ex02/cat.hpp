/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet < agardet@student.42lyon.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 23:41:53 by agardet           #+#    #+#             */
/*   Updated: 2022/04/17 23:41:53 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "aanimal.hpp"

class	Cat : public AAnimal
{
	public :

		Cat(void);
		Cat(Cat const & src);

		virtual ~Cat(void);

		Cat & operator=(Cat const & rhs);

		virtual void	makeSound(void) const;
	
	private :

		Brain*	_brain;
};

#endif