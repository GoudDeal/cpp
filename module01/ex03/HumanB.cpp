/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:08:54 by dcyprien          #+#    #+#             */
/*   Updated: 2022/07/30 21:17:34 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name){
	return;
}

HumanB::~HumanB(void){
	return;
}

void	HumanB::setWeapon(Weapon& weapon){
	this->_weapon = &weapon;
}

void	HumanB::attack(void)const{
	if (!this->_weapon)
		std::cout << this->_name << " doesn't have any weapons." << std::endl;
	else
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}