/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet < agardet@student.42lyon.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 23:41:44 by agardet           #+#    #+#             */
/*   Updated: 2022/04/17 23:41:44 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class	Brain
{
	public :

		Brain(void);
		Brain(Brain const & src);

		~Brain(void);

		Brain &	operator=(Brain const & rhs);
	
	private :

		std::string	_ideas[100];
};

#endif