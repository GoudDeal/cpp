/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 17:27:28 by dcyprien          #+#    #+#             */
/*   Updated: 2022/08/21 08:33:49 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Please enter exactly 1 argument" << std::endl;
		return (0);
	}

	Convert	conv;
	double	f;

	if (conv.isChar(av[1]))
		f = av[1][0];
	else
		f = std::atol(av[1]);

	if (f == 0 && !conv.isNum(av[1]))
	{
		std::cout << "Impossible conversion" << std::endl;
		return(0);
	}

	try
	{
		char c = conv.toChar(f);
		std::cout << "char: " << c << std::endl; 
	}
	catch(const std::string& e)
	{
		std::cout << "char: " << e << std::endl;
	}

	try
	{
		int i = conv.toInt(f);
		std::cout << "int: " << i << std::endl; 
	}
	catch(const std::string& e)
	{
		std::cout << "int: " << e << std::endl;
	}
	
	try
	{
		f = conv.toFloat(f);
		std::cout << std::fixed << std::setprecision(2) << "float: " << f << "f" << std::endl; 
	}
	catch(const std::string& e)
	{
		std::cout <<"float: " << e << std::endl;
	}

	try
	{
		double d = conv.toDouble(f);
		std::cout << std::fixed << std::setprecision(1) << "double: " << d << std::endl; 
	}
	catch(const std::string& e)
	{
		std::cout << "double: " << e << '\n';
	}

	return (0);
}