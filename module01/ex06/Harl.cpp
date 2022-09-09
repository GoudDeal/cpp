/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 18:28:02 by dcyprien          #+#    #+#             */
/*   Updated: 2022/08/12 14:30:24 by dcyprien         ###   ########.fr       */
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

int		Harl::_getLevels(std::string level) const{
	int i = 0;

	while (level.compare(this->_complaints[i]) != 0 && i < 3)
		i++;
	if (i == 3 && level.compare(this->_complaints[3]) != 0)
		return (4);
	return (i);
}

void	Harl::complain(std::string level){
	int i = this->_getLevels(level);
	switch (i)
	{
		case (DEBUG):
			(this->*_functions[0])();
		case (INFO):
			(this->*_functions[1])();
		case (WARNING):
			(this->*_functions[2])();
		case (ERROR):
			(this->*_functions[3])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

void	Harl::_debug(void){
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl << std::endl;;
}

void	Harl::_info(void){
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl << std::endl;
}

void	Harl::_warning(void) {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl << std::endl;
}

void	Harl::_error(void){
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now!" << std::endl << std::endl;
}