/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet < agardet@student.42lyon.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 21:37:05 by agardet           #+#    #+#             */
/*   Updated: 2022/04/10 21:37:05 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string.h>

bool	open_files(std::ifstream& ifs, std::ofstream& ofs, std::string filename)
{
	std::string	outfile = filename + ".replace";
	
	ifs.open(filename.c_str(), std::ios_base::in);
	if (!ifs.is_open())
	{
		ifs.close();
		std::cout << "Impossible to open : " << filename << std::endl;
		return (0);
	}
	ofs.open(outfile.c_str(), std::ios_base::out | std::ios_base::trunc);
	if (!ofs.is_open())
	{
		ofs.close();
		std::cout << "Impossible to create : " << outfile << std::endl;
		return (0);
	}
	return (1);
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Usage : ./my_sed <source filename> <searched str> <substitute str>" << std::endl;
		return (1);
	}
	
	std::string			to_replace = av[2];
	std::string			substitute = av[3];
	if (to_replace.empty() || substitute.empty())
	{
		std::cout << "Args cannot be empty" << std::endl;
		return (1);
	}

	std::ifstream		ifs;
	std::ofstream		ofs;
	if (!open_files(ifs, ofs, av[1]))
		return (1);
	
	std::stringstream	buf;
	buf << ifs.rdbuf();
	std::string			haystack = buf.str();
	
	size_t				i = 0;
	while ((i = haystack.find(to_replace, i)) != std::string::npos)
	{
		haystack.erase(i, to_replace.size());
		haystack.insert(i, substitute);
		i += substitute.size();
	}
	ofs << haystack;
	ifs.close();
	ofs.close();
	return (0);
}