/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 13:04:51 by dcyprien          #+#    #+#             */
/*   Updated: 2022/08/19 00:25:06 by dcyprien         ###   ########.fr       */
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

void	FragTrap::highFiveGuys(void){
	if (this->getHp() <= 0)
		std::cout << "You're dead. No high fives for dead guys." << std::endl;
	else if (this->getAp() <= 0)
		std::cout << "You're too exhausted to do an high five." << std::endl;
	else
		std::cout << "Hey guys ! Give me five !" << std::endl;
	return ;
}