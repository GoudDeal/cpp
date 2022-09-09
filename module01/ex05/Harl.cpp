/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 18:28:02 by dcyprien          #+#    #+#             */
/*   Updated: 2022/06/24 18:59:54 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void){
	this->_complaints[0] = "DEBUG";
	this->_complaints[1] = "INFO";
	this->_complaints[2] = "WARNING";
	this->_complaints[3] = "ERROR";
	this->_functions[0] = &Harl::_debug;
	this->_functions[1] = &Harl::_info;
	this->_functions[2] = &Harl::_warning;
	this->_functions[3] = &Harl::_error;
	return;
}

Harl::~Harl(void){
	return;
}

void	Harl::complain(std::string level){
	int i = 0;
	for (i = 0; level.compare(this->_complaints[i]) != 0 && i < 3; i++);
	if (i == 3 && level.compare("ERROR") != 0)
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return;
	}
	(this->*_functions[i])();
}

void	Harl::_debug(void){
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::_info(void){
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::_warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::_error(void){
	std::cout << "This is unacceptable! I want to speak to the manager now!" << std::endl;
}