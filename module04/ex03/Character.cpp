/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 22:03:02 by dcyprien          #+#    #+#             */
/*   Updated: 2022/08/12 15:06:57 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Materia.hpp"

Character::Character(void): _name(""){
	for (int i = 0; i < 4; i++)
		this->_inv[i] = NULL;
	return ;
}

Character::Character(std::string const name):_name(name){
	for (int i = 0; i < 4; i++)
		this->_inv[i] = NULL;
	return ;
}

Character::Character(Character const & src): _name(src.getName()){
	for (int i = 0; i < 3; i++)
		this->_inv[i] = src.getItem(i)->clone();
	return ;
}

Character::~Character(void){
	for (int i = 0; i < 4; i++){
		delete this->_inv[i];
	}
	return ;
}

Character & Character::operator=(Character const &rhs){
	this->_name = rhs.getName();
	for (int i = 0; i < 4; i++)
		delete this->_inv[i];
	for (int i = 0; i < 4; i++)
		this->_inv[i] = rhs.getItem(i);
	return *this;
}

std::string const & Character::getName(void) const{
	return this->_name;
}

AMateria * Character::getItem(int const index)const{
	if (index < 0 || index > 3)
		return NULL;
	return this->_inv[index];
}

void Character::equip(AMateria * m){
	for (int i = 0; i < 4; i++)
	{
		if (this->_inv[i] == NULL)
		{
			this->_inv[i] = m;
			return ;
		}
	}
	return ;
}

void Character::unequip(int idx){
	if (idx < 0 || idx > 3)
		return ;
	this->_inv[idx] = NULL;
	return ;
}

void Character::use(int idx, ICharacter & target){
	if (idx < 0 || idx > 3)
	{
		return ;
	}
	if (this->getItem(idx) == NULL)
		return ;
	this->getItem(idx)->use(target);
	return ;
}