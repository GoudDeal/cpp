/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 16:52:00 by dcyprien          #+#    #+#             */
/*   Updated: 2022/07/22 19:42:23 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void){
	ClapTrap michelin = ClapTrap("Michelin");
	ClapTrap jacquou = ClapTrap("Jacquou");
	ScavTrap bernard = ScavTrap("Bernard");
	std::cout << std::endl;

	michelin.attack(bernard.getName());
	bernard.takeDamage(michelin.getAd());
	jacquou.attack(bernard.getName());
	bernard.takeDamage(jacquou.getAd());
	bernard.guardGate();
	michelin.attack(bernard.getName());
	bernard.takeDamage(michelin.getAd());
	jacquou.attack(bernard.getName());
	bernard.takeDamage(jacquou.getAd());
	bernard.attack(michelin.getName());
	michelin.takeDamage(bernard.getAd());
	bernard.attack(jacquou.getName());
	jacquou.takeDamage(bernard.getAd());
	michelin.beRepaired(10);
	jacquou.beRepaired(20);

	// for (int i = 0; i <= 10; i++)
	// {
	// 	michelin.attack(jacquou.getName());
	// 	jacquou.takeDamage(michelin.getAd());
	// 	jacquou.beRepaired(4);
	// 	jacquou.attack(michelin.getName());
	// 	michelin.takeDamage(jacquou.getAd());
	// 	michelin.beRepaired(5);
	// }
	
	std::cout << std::endl;
	return 1;
}