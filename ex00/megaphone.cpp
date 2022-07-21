/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 16:42:29 by dcyprien          #+#    #+#             */
/*   Updated: 2022/06/11 16:42:31 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int ac, char *av[])
{
	int i = 1;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (av[i])
	{
		std::string str = av[i];
		for (int x = 0; x < (int)str.length(); x++){
			str[x] = toupper(str[x]);
		}
		std::cout << str;
		i++;
	}
	std::cout << std::endl;
	return (0);
}