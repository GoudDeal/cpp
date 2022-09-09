/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 19:11:47 by dcyprien          #+#    #+#             */
/*   Updated: 2022/08/19 00:25:18 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void){
	this->_name = "Default Name";
	this->_hp = 100;
	this->_ap = 50;
	this->_ad = 20;
	std::cout << "Default ScavTrap constructor called." << std::endl << "ScavTrap \"Default Name\" created." << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &src): ClapTrap(src){
	this->_name = src.getName();
	this->_hp = src.getHp();
	this->_ap = src.getAp();
	this->_ad = src.getAd();
	std::cout << "Copy ScavTrap constructor called." << std::endl << "ScavTrap named \"" << src.getName() << "\" created." << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string const name){
	this->_name = name;
	this->_hp = 100;
	this->_ap = 50;
	this->_ad = 20;
	std::cout << "Named ScavTrap constructor called." << std::endl << "ScavTrap named \"" << name << "\" created." << std::endl;
	return ;
}

ScavTrap::~ScavTrap(void){
	std::cout << "Default ScavTrap destructor called." << std::endl << "ScavTrap named \"" << this->getName() << "\" destroyed." << std::endl;
	return ;
}

ScavTrap & ScavTrap::operator=(ScavTrap const &rhs){
	this->_hp = rhs.getHp();
	this->_ap = rhs.getAp();
	this->_ad = rhs.getAd();
	this->_name = rhs.getName();
	return *this;
}

void	ScavTrap::attack(const std::string & target){
	if (this->getAp() >= 1)
	{
		std::cout << this->getName() << " brutalizes " << target << ", causing " << this->getAd() << " points of damage!" << std::endl;
		this->_ap -= 1;
	}
	else
		std::cout << this->getName() << " is out of energy! " << this->getName() << " can't do anything." << std::endl;
	return ;
}

void	ScavTrap::guardGate(void) const{
	if (this->getAp() <= 0)
		std::cout << "What gates are you planning to guard if you don't have energy ?" << std::endl;
	else if (this->getHp() <= 0)
		std::cout << "A good guard is a dead guard. And you're a very good guard! (Because you're dead... If you didn't get the joke.)" << std::endl;
	else
		std::cout << "\"Brzrzrzrzr ! Gate keeper mode activated\"" << std::endl << "Uh oh, " << this->getName() << " has entered Gate keeper mode. Better stay away." << std::endl;
	return ;
}