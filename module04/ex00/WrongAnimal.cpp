/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:45:03 by dcyprien          #+#    #+#             */
/*   Updated: 2022/07/25 17:52:32 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): _type("WrongAnimal"){
	std::cout << "Object " << this->getType() << " created" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src): _type(src.getType()){
	std::cout << "Object " << this->getType() << " copied from object of type " << this->getType() << std::endl;
	return ;
}

WrongAnimal::~WrongAnimal(void){
	std::cout << "Object " << this->getType() << " destroyed." << std::endl;
	return ;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const &rhs){
	this->_type = rhs.getType();
	return *this;
}

std::string WrongAnimal::getType(void) const{
	return this->_type;
}

void	WrongAnimal::makeSound(void) const{
	std::cout << "*very weirds animal noises*" << std::endl;
}
