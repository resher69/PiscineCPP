/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet < agardet@student.42lyon.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 23:01:07 by agardet           #+#    #+#             */
/*   Updated: 2022/04/23 23:01:07 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>

class ElementNotFoundException : public std::exception
{
	public:
		virtual const char	*what() const throw() { return "Element not found"; };
};

class EmptyContainerException : public std::exception
{
	public:
		virtual const char	*what() const throw() { return "Container is empty"; };
};

template<typename T>
int		easyfind(T & container, int n)
{
	if (container.empty())
		throw EmptyContainerException();

	typename T::iterator	ret;

	ret = std::find(container.begin(), container.end(), n);
	if (ret != container.end())
		return *ret;
	throw ElementNotFoundException();
}