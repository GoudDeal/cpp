/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:00:35 by dcyprien          #+#    #+#             */
/*   Updated: 2022/06/23 16:40:57 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon){
	return;
}

HumanA::~HumanA(void){
	return;
}

void	HumanA::attack(void) const{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}