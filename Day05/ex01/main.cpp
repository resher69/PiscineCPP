#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main( void )
{
	try {
		Bureaucrat kukur("Kukur", 50);
		Bureaucrat resher("Resher", 1);
		Form war("Declaration_of_War", 10, 10);

		std::cout << kukur << std::endl;
		std::cout << resher << std::endl;
		std::cout << war << std::endl;

		kukur.signForm(war);
		std::cout << war << std::endl;
		resher.signForm(war);
		std::cout << war << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}