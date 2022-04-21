/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 18:28:39 by agardet           #+#    #+#             */
/*   Updated: 2022/04/20 19:24:39 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <cstddef>
#include <iostream>
#include <cstdlib>
#include <ctime>

class Base
{
	public:
		virtual ~Base() {}
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base	*generate()
{
	switch (rand() % 3)
	{
		case 0:
			std::cout << "Type A created" << std::endl;
			return new A;
			break;
		case 1:
			std::cout << "Type B created" << std::endl;
			return new B;
			break;
		default:
			std::cout << "Type C created" << std::endl;
			return new C;
			break;
	}
}

void	identify(Base* p)
{
	Base* ptr;
	if ((ptr = dynamic_cast<A*>(p)))
		std::cout << "Type of identified object: A" << std::endl;
	if ((ptr = dynamic_cast<B*>(p)))
		std::cout << "Type of identified object: B" << std::endl;
	if ((ptr = dynamic_cast<C*>(p)))
		std::cout << "Type of identified object: C" << std::endl;
	return;
}

void	identify(Base &p)
{
	Base	*tmp;

	try
	{
			tmp = &dynamic_cast<A &>(p);
			std::cout << "Type of identified object: A" << std::endl;
	}
	catch(std::bad_cast &e)
	{
		try
		{
				tmp = &dynamic_cast<B &>(p);
				std::cout << "Type of identified object: B" << std::endl;
		}
		catch (std::bad_cast &e)
		{
			try
			{
					tmp = &dynamic_cast<C &>(p);
					std::cout << "Type of identified object: C" << std::endl;
			}
			catch (std::bad_cast &e)
			{}
		}
	}
}

int main()
{
	srand(time(NULL));

	Base	*base1 = NULL;
	Base	*base2 = NULL;
	Base	*base3 = NULL;

	base1 = generate();
	base2 = generate();
	base3 = generate();
	std::cout << std::endl;

	std::cout << "By pointer:" << std::endl;
	identify(base1);
	identify(base2);
	identify(base3);
	std::cout << std::endl;

	std::cout << "By reference:" << std::endl;
	identify(*base1);
	identify(*base2);
	identify(*base3);

	delete base1;
	delete base2;
	delete base3;
}