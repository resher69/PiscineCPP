/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 17:03:24 by agardet           #+#    #+#             */
/*   Updated: 2022/04/21 17:26:24 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <cstdlib>
#include <iostream>

template <typename T>
void    iter(T *array, size_t size, void (*f)(T const &elem))
{
    for (size_t i = 0; i < size; i++)
        f(array[i]);
    return ;
}

template <typename T>
void    display(T const &value)
{
    std::cout << ' ' << value;
}

#endif