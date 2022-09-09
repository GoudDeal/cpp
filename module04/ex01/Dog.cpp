/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:15:56 by dcyprien          #+#    #+#             */
/*   Updated: 2022/07/30 23:07:18 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): _brain(new Brain){
	this->_type = "Dog";
	std::cout << "Cute dog object created with type " << this->getType() << std::endl;
	return ;
}

Dog::Dog(Dog const &src): Animal(src), _brain(new Brain(*src.getBrain())){
	this->_type = src.getType();
	delete this->_brain;
	this->_brain = src.getBrain();
	std::cout << "Cute dog object created with type " << this->getType() << " from object of type " << src.getType() << std::endl;
	return ;
}

Dog ::~Dog(void){
	std::cout << "Cute dog object with type " << this->getType() << " got gently destroyed." << std::endl;
	delete this->_brain;
	return ;
}

Brain * Dog::getBrain(void) const{
	return this->_brain;
}

Dog & Dog::operator=(Dog const &rhs){
	this->_type = rhs.getType();
	delete this->_brain;
	this->_brain = rhs.getBrain();
	return *this;
}

void	Dog::makeSound(void) const{
	std::cout << "Meow ?" << std::endl;
	return ;
}