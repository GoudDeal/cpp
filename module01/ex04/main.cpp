/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 17:18:36 by dcyprien          #+#    #+#             */
/*   Updated: 2022/07/30 21:19:10 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

char	*zero(char *str, int size){
	for (int i = 0; i < size; i++)
		str[i] = 0;
	return (str);
}

int	main(int ac, char *av[])
{
	if (ac != 4)
	{
		std::cout << "Missing arguments. The program will exit." << std::endl;
		return (1);
	}
	std::ifstream	input(av[1]);
	if (!input.is_open())
	{
		std::cout << "Couldn't open input file. Programm will exit" << std::endl;
		return (1);
	}
	std::string		s1 = av[2];
	std::string		s2 = av[3];
	std::string		name = av[1];
	name.append(".replace");
	std::ofstream	output;
	output.open(name.c_str());
	int				size;
	char*			tmp = 0;
	std::string		str = "";
	size_t			found = 0;

	if (s1.empty())
	{
		std::cout << "No remplacement term found." << std::endl;
		return (1);
	}
	input.seekg(0, input.end);
	size = input.tellg();
	tmp = new char [size + 1];
	tmp = zero(tmp, size + 1);
	input.seekg(0, input.beg);
	input.read(tmp, size);
	str.insert(0, tmp);
	str.copy(tmp, str.size(), 0);
	found = str.find(s1, 0);
	if (found == std::string::npos)
	{
		output << tmp;
		delete tmp;
		return (0);
	}
	delete [] tmp;
	tmp = new char [size + 1];
	tmp = zero(tmp, size + 1);
	str.copy(tmp, found, 0);
	output << tmp;
	str.erase(0, found + s1.size());
	output << s2;
	while (found != std::string::npos)
	{
		found = str.find(s1, 0);
		if (found == std::string::npos)
			break;
		delete [] tmp;
		tmp = new char [size + 1];
		tmp = zero(tmp, size + 1);
		str.copy(tmp, found, 0);
		str.erase(0, found + s1.size());
		output << tmp;
		output << s2;
	}
	delete [] tmp;
	tmp = new char [size + 1];
	tmp = zero(tmp, size + 1);
	str.copy(tmp, str.size(), 0);
	output << tmp;
	delete [] tmp;
	return 0;
}