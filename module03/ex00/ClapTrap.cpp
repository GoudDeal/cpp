/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 16:51:57 by dcyprien          #+#    #+#             */
/*   Updated: 2022/07/22 19:32:48 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name("Default name"), _hp(10), _ap(10), _ad(0){
	std::cout << "Default ClapTrap constructor called." << std::endl << "ClapTrap named \"Default Name\" created." << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const &src):_name(src.getName()), _hp(src.getHp()), _ap(src.getAp()), _ad(src.getAd()){
	std::cout << "Copy ClapTrap constructor called." << std::endl << "ClapTrap named \"" << src.getName() << "\" created." << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string const name): _name(name), _hp(10), _ap(10), _ad(0){
	std::cout << "Named ClapTrap constructor called." << std::endl << "ClapTrap named \"" << name << "\" created." << std::endl;
	return ;
}

ClapTrap::~ClapTrap(void){
	std::cout << "Default ClapTrap destructor called." << std::endl << "ClapTrap named \"" << this->getName() << "\" destroyed." << std::endl;
	return ;
}

int	ClapTrap::getHp(void) const{
	return this->_hp;
}

int	ClapTrap::getAp(void) const{
	return this->_ap;
}

int	ClapTrap::getAd(void) const{
	return this->_ad;
}

std::string	ClapTrap::getName(void) const{
	return this->_name;
}

ClapTrap & ClapTrap::operator=(ClapTrap const &rhs){
	this->_hp = rhs.getHp();
	this->_ap = rhs.getAp();
	this->_ad = rhs.getAd();
	this->_name = rhs.getName();
	return *this;
}

void	ClapTrap::attack(const std::string & target){
	if (this->getAp() >= 1)
	{
		std::cout << "ClapTrap " << this->getName() << " attacks " << target << ", causing " << this->getAd() << " points of damage!" << std::endl;
		this->_ap -= 1;
	}
	else
		std::cout << "ClapTrap " << this->getName() << " is out of energy! " << this->getName() << " can't do anything." << std::endl;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount){
	if ((this->getHp() - (int)amount) <= 0)
	{
		this->_hp = 0;
		std::cout << this->getName() << " has lost all his HP! He's dead, Jim!" << std::endl;
	}
	else
	{
		this->_hp -= amount;
		std::cout << this->getName() << " loses " << amount << " HP" << std::endl << this->getName() << " now has " << this->getHp() << " HP." << std::endl;
	}
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (this->getHp() != 0 && this->getAp() >= 1)
	{
		if (this->getAd() == 0 && (this->getHp() + amount) > 10)
		{
			std::cout << "Beep Boop! " << this->getName() << " tried to repair himself for " << amount << " HP but he can't have more than 10 HP !" << std::endl << this->getName() << " now has " << this->getHp() << " HP.";
			std::cout << " He repaired for " << 10 - this->getHp() << " HP instead." << std::endl;
			this->_hp = 10;
		}
		else if (this->getAd() == 20 && (this->getHp() + amount) > 100)
		{
			std::cout << "Beep Boop! " << this->getName() << " tried to repair himself for " << amount << " HP but he can't have more than 100 HP !" << std::endl << this->getName() << " now has " << this->getHp() << " HP.";
			std::cout << " He repaired for " << 100 - this->getHp() << " HP instead." << std::endl;
			this->_hp = 100;
		}
	}
	else if (this->getHp() <= 0)
		std::cout << this->getName() << " is dead... F" << std::endl;
	else if (this->getAp() == 0)
		std::cout << this->getName() << " is out of energy! " << this->getName() << " can't do anything." << std::endl;
	else
	{
		this->_hp += amount;
		std::cout << "Beep Boop! " << this->getName() << " repaired himself for " << amount << " HP" << std::endl << this->getName() << " now has " << this->getHp() << " HP." << std::endl;
		this->_ap -= 1;
	}
	return ;
}