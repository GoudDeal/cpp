/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 14:49:19 by dcyprien          #+#    #+#             */
/*   Updated: 2022/06/23 16:41:09 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type){
	return;
}

Weapon::~Weapon(void){
	return;	
}

const std::string&	Weapon::getType(void) const{
	return (this->_type);
}

void			Weapon::setType(std::string type){
	this->_type = type;
}