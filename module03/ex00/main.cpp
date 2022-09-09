/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 16:52:00 by dcyprien          #+#    #+#             */
/*   Updated: 2022/07/22 19:04:45 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void){
	ClapTrap michelin = ClapTrap("Michelin");
	ClapTrap jacquou = ClapTrap("Jacquou");
	std::cout << std::endl;

	michelin.attack(jacquou.getName());
	jacquou.takeDamage(michelin.getAd());
	jacquou.beRepaired(4);
	jacquou.attack(michelin.getName());
	michelin.takeDamage(jacquou.getAd());
	michelin.beRepaired(0);
	michelin.attack("Jacquou");
	jacquou.takeDamage(5);
	jacquou.attack("Michelin");
	michelin.takeDamage(jacquou.getAd());
	michelin.attack("Jacquou");
	jacquou.takeDamage(6);
	jacquou.beRepaired(5);

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