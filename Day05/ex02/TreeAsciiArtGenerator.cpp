#include <iostream>
#include <ctime>
#include <cstdlib>
#include <unistd.h>
#include <fstream>
#include <sstream>
#include <string.h>

int *	GetId_branchTab(const char * line, int * new_branches)
{
	/* Find number of branches and their places */

	int	i = 0;
	int	j = 0;
	while (line[j] != '\n')
	{
		if (line[j] != ' ' && line[j] != '#')
			i++;
		j++;
	}
	*new_branches = i;

	int * id_branch = new int[i];
	i = 0;
	j = 0;
	while (line[j] !='\n')
	{
		if (line[j] != ' ' && line[j] != '#')
		{
			id_branch[i] = j;
			i++;
		}
		j++;
	}
	return id_branch;
}

int	GetRandGrowState(bool do_leaves, int n, int n_iter)
{
	/*
	State 0 : grow up
	State 1/2 : grow left/right
	State 3 : grow both dir
	State 4 : grow leaves
	*/
	int rd = rand() % 100 + 1;
	if (n == n_iter)
		return 4;
	else if (do_leaves)
	{
		if (rd < 25)
			return 0;
		else if (rd < 50)
			return 1;
		else if (rd < 75)
			return 2;
		else if (rd < 85)
			return 3;
		else
			return 4;
	}
	else
	{
		if (rd < 50)
			return 0;
		else if (rd < 65)
			return 1;
		else if (rd < 80)
			return 2;
		else
			return 3;
	}
}

void	RandGrow(long int id_seed, std::string & line, int n, int n_iter, bool do_leaves)
{
	int	grow_state = GetRandGrowState(do_leaves, n, n_iter);
	/*
	Case 0 : grow up
	Case 1/2 : grow left/right
	Case 3 : grow both dir
	Case 4 : grow leaves
	*/
	switch (grow_state)
	{
		case 0:
			line.replace(id_seed, 1, "|");
			break;

		case 1:
			if (id_seed - 1 >= 0)
				line.replace(id_seed - 1, 1, "\\");
			break;

		case 2:
			if (id_seed + 1 < 50)
				line.replace(id_seed + 1, 1, "/");
			break;

		case 3:
			if (id_seed - 1 >= 0)
				line.replace(id_seed - 1, 1, "\\");
			if (id_seed + 1 < 50)
				line.replace(id_seed + 1, 1, "/");
			break;

		case 4:
			line.replace(id_seed, 1, "#");
			if (id_seed - 1 >= 0)
				line.replace(id_seed - 1, 1, "#");
			if (id_seed + 1 < 50)
				line.replace(id_seed + 1, 1, "#");
			break;
	}
}

void	TreeGenerator(std::ostream & ofs, int seed, int n_iter, int n_branch, int * id_branch)
{
	static int	n = 0;
	if (n > n_iter)
	{
		n = 0;
		return;
	}

	std::string	line;
	line.resize(50, ' ');
	line.push_back('\n');

	if (n == 0) /* grow trunk */
	{
		line.replace(seed, 1, "|");
		id_branch = new int[1];
		id_branch[0] = seed;
		n_branch = 1;
	}
	else /* grow randomly but try to look like a tree */
	{
		for (int i = 0; i < n_branch; i++)
			RandGrow(id_branch[i], line, n, n_iter, n_branch > 1);
		id_branch = GetId_branchTab(line.c_str(), &n_branch);
	}
	n++;
	TreeGenerator(ofs, seed, n_iter, n_branch, id_branch); /* grow again */
	delete [] id_branch;
	ofs << line;
	return;
}

void	grow(int time_grow, std::ofstream & ofs)
{
	time_t	t_seed = time(NULL);
	for(int i = 0; i < time_grow; i++)
	{
		// std::chrono::milliseconds timespan(1000);
		// std::this_thread::sleep_for(timespan);
		usleep(1000000);
		std::cout << "\033[H\033[2J";
		if (i < time_grow - 1)
			std::cout << "Shrubbery growing please wait (remaining time : " << time_grow - (i + 1) << " s.)" << std::endl;
		srand(t_seed);
		TreeGenerator(std::cout, rand() % 30 + 5, i, 0, NULL);
	}
	srand(t_seed);
	TreeGenerator(ofs, rand() % 30 + 5, time_grow - 1, 0, NULL);
	std::cout << "Shrubbery fully grown !" << std::endl;
}

// int main(void)
// {
// 	srand(time(NULL));
// 	// for(int i = 0; i < 60; i++)
// 	// {
// 	// 	std::chrono::milliseconds timespan(1000);
// 	// 	std::this_thread::sleep_for(timespan);
// 	// 	std::cout << "\033[H\033[2J";
// 	// 	TreeGenerator(std::cout, rand() % 30 + 5, 20, 0, NULL);
// 	// }
// 	std::ofstream	ofs;
// 	ofs.open("tree.txt", std::ios_base::out | std::ios_base::trunc);
// 	// TreeGenerator(ofs, rand() % 30 + 5, 25, 0, NULL);
// 	grow(25, ofs);
// 	ofs.close();
// 	return (0);
// }