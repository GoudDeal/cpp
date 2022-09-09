/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 17:00:04 by dcyprien          #+#    #+#             */
/*   Updated: 2022/06/16 17:09:48 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*		Zombie::zombieHorde(int n, std::string name){
	Zombie*		horde = new Zombie[n];

	for (int i = 0; i < n; i++)
		horde[i].setName(name);
	return &(horde[0]);
}