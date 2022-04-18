#include <cstdlib>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string.h>

void PrintPresidentialPardon(std::string const & target)
{
	std::ifstream		ifs;
	std::stringstream	buf;
	
	try
	{
		ifs.open("Presidential_Pardon_Letter.txt", std::ios_base::in);
		buf << ifs.rdbuf();
		std::string			haystack = buf.str();
		std::string			to_find = "trget";
		
		size_t				i = 0;
		while ((i = haystack.find(to_find, i)) != std::string::npos)
		{
			haystack.erase(i, to_find.size());
			haystack.insert(i, target);
			i += target.size();
		}
		std::cout << haystack;
		ifs.close();
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}