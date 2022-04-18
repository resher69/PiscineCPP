
#include <cstdlib>
#include <iostream>
#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"
#include "wronganimal.hpp"
#include "wrongcat.hpp"

int		main(void)
{
	Animal*			A = new Animal();
	Animal*			B = new Dog();
	Animal*			C = new Cat();
	WrongAnimal*	D = new WrongCat();
	WrongCat*		WrongC = new WrongCat();

	std::cout << std::endl;

	std::cout << A->getType() << std::endl;
	A->makeSound();
	std::cout << B->getType() << std::endl;
	B->makeSound();
	std::cout << C->getType() << std::endl;
	C->makeSound();
	std::cout << D->getType() << std::endl;
	D->makeSound();
	std::cout << WrongC->getType() << std::endl;
	WrongC->makeSound();
	
	std::cout << std::endl;

	delete(A);
	delete(B);
	delete(C);
	delete(D);
	delete(WrongC);

	return (0);
}