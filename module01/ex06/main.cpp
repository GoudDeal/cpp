/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 18:14:55 by dcyprien          #+#    #+#             */
/*   Updated: 2022/06/24 18:55:22 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int		main(int ac, char *av[])
{
	Harl harl = Harl();
	if (ac > 2)
	{
		std::cout << "Too many arguments! Harl loves to complain but still, this is too much." << std::endl;
		return (1);
	}
	if (ac < 2)
	{
		std::cout << "Not enough arguments! How is Harl supposed to complain now?" << std::endl;
		return (1);
	}
	harl.complain(av[1]);
	return (0);
}