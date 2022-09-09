/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 16:24:45 by dcyprien          #+#    #+#             */
/*   Updated: 2022/06/23 14:33:16 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main(int ac, char *av[])
{
	Zombie*	horde = NULL;

	if (ac != 2)
		return (1);
	horde = horde->zombieHorde(strtol(av[1], NULL, 10), "Jeff");
	for (int i = 0; i < strtol(av[1], NULL, 10); i++)
		horde[i].announce();
	delete [] horde;
	return (0);
}