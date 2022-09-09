/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 16:24:45 by dcyprien          #+#    #+#             */
/*   Updated: 2022/06/16 16:31:17 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main(void)
{
	Zombie*	bob = NULL;

	bob = bob->newZombie("Bob");
	bob->announce();

	bob->randomChump("Jeff");

	delete bob;
	return (0);
}