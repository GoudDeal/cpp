/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 16:14:40 by dcyprien          #+#    #+#             */
/*   Updated: 2022/06/16 16:34:20 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name){

	this->_name = name;
}

Zombie::~Zombie(void){

	std::cout << this->getName() << " got slayed!" << std::endl;
	return;
}

std::string	Zombie::getName(void) const{

	return this->_name;
}

void	Zombie::announce(void){

	std::cout << this->getName() << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

