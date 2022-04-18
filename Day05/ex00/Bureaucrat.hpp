/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 20:51:54 by agardet           #+#    #+#             */
/*   Updated: 2022/04/18 20:53:50 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class	Bureaucrat
{
	public :

		Bureaucrat(std::string const name, unsigned short grade);
		Bureaucrat(Bureaucrat const & src);

		~Bureaucrat(void);

		Bureaucrat &	operator=(Bureaucrat const & rhs);

		std::string	const &	getName(void) const;
		unsigned short		getGrade(void) const;
		
		class GradeTooHighException : public std::exception
		{
			public:
			
				const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
			
				const char* what() const throw();
		};

		void	promote(void);
		void	demote(void);

	private :

		Bureaucrat(void);

		const std::string	_name;
		unsigned short		_grade;				
};

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & i);

#endif