/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 16:52:00 by dcyprien          #+#    #+#             */
/*   Updated: 2022/08/19 00:25:13 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <ctime>
#include <cstdlib>

enum {
	ATTACK,
	REPAIR,
	SPECIAL
};

bool	oneAlive(FragTrap & frag, ScavTrap & scav, DiamondTrap & diam){
	if (frag.getHp() <= 0 && scav.getHp() <= 0)
		return true;
	if (scav.getHp() <= 0 && diam.getHp() <= 0)
		return true;
	if (diam.getHp() <= 0 && frag.getHp() <= 0)
		return true;
	return false;
}

int	getRand(int range){
	int num = 0 + (rand() % range);
	return (num);
}

int main(void){
	FragTrap michelin = FragTrap("Michelin");
	ScavTrap jacquou = ScavTrap("Jacquou");
	DiamondTrap bernard = DiamondTrap("Bernard");
	std::cout << std::endl;

	srand((unsigned int)time(NULL));
	while (oneAlive(michelin, jacquou, bernard) == false)
	{
		switch (getRand((2 - 0 + 1)))
		{
			case (ATTACK):
				if (getRand(1 - 0 + 1) == 0)
				{
					if (jacquou.getHp() <= 0)
						std::cout << "Come on Michelin... Jacquou is already dead..." << std::endl;
					else
					{
						michelin.attack("Jacquou");
						std::cout << std::endl;
						jacquou.takeDamage(michelin.getAd());
						std::cout << std::endl;
					}
				}
				else
				{
					if (bernard.getHp() <= 0)
						std::cout << "Come on Michelin... Bernard is already dead..." << std::endl;
					else
					{
						michelin.attack("Bernard");
						std::cout << std::endl;
						bernard.takeDamage(michelin.getAd());
						std::cout << std::endl;
					}
				}
				break;
			case (REPAIR):
				michelin.beRepaired(getRand(10 - 1 + 1));
				std::cout << std::endl;
				break;
			case (SPECIAL):
				michelin.highFiveGuys();
				std::cout << std::endl;
				break;
		}
		switch (getRand((2 - 0 + 1)))
		{
			case (ATTACK):
				if (getRand(1 - 0 + 1) == 0)
				{
					if (michelin.getHp() <= 0)
						std::cout << "Come on Jacquou... Michelin is already dead..." << std::endl;
					else
					{
						jacquou.attack("Michelin");
						std::cout << std::endl;
						michelin.takeDamage(jacquou.getAd());
						std::cout << std::endl;
					}
				}
				else
				{
					if (bernard.getHp() <= 0)
						std::cout << "Come on Jacquou... Bernard is already dead..." << std::endl;
					else
					{
						jacquou.attack("Bernard");
						std::cout << std::endl;
						bernard.takeDamage(jacquou.getAd());
						std::cout << std::endl;
					}
				}
				break;
			case (REPAIR):
				jacquou.beRepaired(getRand(10 - 1 + 1));
				std::cout << std::endl;
				break;
			case (SPECIAL):
				jacquou.guardGate();
				std::cout << std::endl;
				break;
		}
		switch (getRand((2 - 0 + 1)))
		{
			case (ATTACK):
				if (getRand(1 - 0 + 1) == 0)
				{
					if (jacquou.getHp() <= 0)
						std::cout << "Come on Bernard... Jacquou is already dead..." << std::endl;
					else
					{
						bernard.attack("Jacquou");
						std::cout << std::endl;
						jacquou.takeDamage(bernard.getAd());
						std::cout << std::endl;
					}
				}
				else
				{
					if (michelin.getHp() <= 0)
						std::cout << "Come on Bernard... Michelin is already dead..." << std::endl;
					else
					{
						bernard.attack("Michelin");
						std::cout << std::endl;
						michelin.takeDamage(bernard.getAd());
						std::cout << std::endl;
					}
				}
				break;
			case (REPAIR):
				bernard.beRepaired(getRand(10 - 1 + 1));
				std::cout << std::endl;
				break;
			case (SPECIAL):
				bernard.whoAmI();
				std::cout << std::endl;
				break;
		}
	}
	
	if (jacquou.getHp() > 0)
		std::cout << "Jacquou is the grand winner of this deathmatch !" << std::endl;
	if (michelin.getHp() > 0)
		std::cout << "Michelin is the grand winner of this deathmatch !" << std::endl;
	if (bernard.getHp() > 0)
		std::cout << "Bernard is the grand winner of this deathmatch !" << std::endl;
	std::cout << std::endl;
	return 1;
}