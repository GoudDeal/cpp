/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:58:44 by dcyprien          #+#    #+#             */
/*   Updated: 2022/07/25 16:56:59 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void): _type("Animal"){
	std::cout << "Object " << this->getType() << " created" << std::endl;
	return ;
}

Animal::Animal(Animal const & src): _type(src.getType()){
	std::cout << "Object " << this->getType() << " copied from object of type " << this->getType() << std::endl;
	return ;
}

Animal::~Animal(void){
	std::cout << "Object " << this->getType() << " destroyed" << std::endl;
	return ;
}

Animal & Animal::operator=(Animal const &rhs){
	this->_type = rhs.getType();
	return *this;
}

std::string Animal::getType(void) const{
	return this->_type;
}

void	Animal::makeSound(void) const{
	std::cout << "*random animal noises*" << std::endl;
}
