/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 13:19:46 by dcyprien          #+#    #+#             */
/*   Updated: 2022/08/19 00:25:03 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void){
	this->_name = "Default Name";
	this->_hp = 100;
	this->_ap = 100;
	this->_ad = 30;
	std::cout << "Default DiamondTrap constructor called." << std::endl << "DiamondTrap \"Default Name\" created." << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src): ClapTrap(), FragTrap(), ScavTrap(){
	this->_name = src.getName();
	this->_hp = src.getHp();
	this->_ap = src.getAp();
	this->_ad = src.getAd();
	std::cout << "Copy DiamondTrap constructor called." << std::endl << "DiamondTrap named \"" << src.getName() << "\" created." << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string const name): ClapTrap(name + "_clap_name"), FragTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"){
	this->_name = name;
	this->_hp = FragTrap::getHp();
	this->_ap = ScavTrap::getAp();
	this->_ad = FragTrap::getAd();
	std::cout << "Named DiamondTrap constructor called." << std::endl << "DiamondTrap named \"" << name << "\" created." << std::endl;
	return ;
}

DiamondTrap::~DiamondTrap(void){
	std::cout << "Default DiamondTrap destructor called." << std::endl << "DiamondTrap named \"" << this->getName() << "\" destroyed." << std::endl;
	return ;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const &rhs){
	this->_hp = rhs.getHp();
	this->_ap = rhs.getAp();
	this->_ad = rhs.getAd();
	this->_name = rhs.getName();
	return *this;
}

void	DiamondTrap::whoAmI(void){
	if (this->getAp() <= 0)
		std::cout << "You don't have enough energy to remember who you are." << std::endl;
	else if (this->getHp() <= 0)
		std::cout << "Who are you ? A dead robot. Stop talking, dead robots don't talk." << std::endl;
	else
	{
		std::cout << this->_name << " is my Diamond name." << std::endl;
		std::cout << this->getName() << " is my ClapTrap's name." << std::endl;
	}
}