/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 13:04:51 by dcyprien          #+#    #+#             */
/*   Updated: 2022/07/24 13:09:49 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void){
	this->_name = "Default Name";
	this->_hp = 100;
	this->_ap = 100;
	this->_ad = 30;
	std::cout << "Default FragTrap constructor called." << std::endl << "FragTrap \"Default Name\" created." << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const &src): ClapTrap(src){
	this->_name = src.getName();
	this->_hp = src.getHp();
	this->_ap = src.getAp();
	this->_ad = src.getAd();
	std::cout << "Copy FragTrap constructor called." << std::endl << "FragTrap named \"" << src.getName() << "\" created." << std::endl;
	return ;
}

FragTrap::FragTrap(std::string const name){
	this->_name = name;
	this->_hp = 100;
	this->_ap = 100;
	this->_ad = 30;
	std::cout << "Named FragTrap constructor called." << std::endl << "FragTrap named \"" << name << "\" created." << std::endl;
	return ;
}

FragTrap::~FragTrap(void){
	std::cout << "Default FragTrap destructor called." << std::endl << "FragTrap named \"" << this->getName() << "\" destroyed." << std::endl;
	return ;
}

FragTrap & FragTrap::operator=(FragTrap const &rhs){
	this->_hp = rhs.getHp();
	this->_ap = rhs.getAp();
	this->_ad = rhs.getAd();
	this->_name = rhs.getName();
	return *this;
}

void	FragTrap::attack(const std::string & target){
	if (this->getAp() >= 1)
	{
		std::cout << "FragTrap " << this->getName() << " slaps " << target << " in the face, causing " << this->getAd() << " points of damage!" << std::endl;
		this->_ap -= 1;
	}
	else
		std::cout << "FragTrap " << this->getName() << " is out of energy! " << this->getName() << " can't do anything." << std::endl;
	return ;
}

void	FragTrap::highFiveGuys(void){
	std::cout << "Hey guys ! Give me five !" << std::endl;
	return ;
}