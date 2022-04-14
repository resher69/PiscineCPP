/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 21:04:53 by agardet           #+#    #+#             */
/*   Updated: 2022/04/12 03:14:45 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class	Harl
{
	public :
	
		Harl(void);
		~Harl(void);
		void	complain(std::string level) const;

	private :
		
		struct __MatchLvlComp
		{
			std::string	_level;
			
			void		(Harl::*_complainDisplay_)(void) const;
		};
		
		static const __MatchLvlComp	__CompTab[4];

		void		debug_(void) const;
		void		info_(void) const;
		void		warning_(void) const;
		void		error_(void) const;
};

#endif