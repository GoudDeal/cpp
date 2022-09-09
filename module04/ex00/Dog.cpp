/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:15:56 by dcyprien          #+#    #+#             */
/*   Updated: 2022/07/25 16:30:46 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void){
	this->_type = "Dog";
	std::cout << "Cute dog object created with type " << this->getType() << std::endl;
	return ;
}

Dog::Dog(Dog const &src): Animal(src){
	this->_type = src.getType();
	std::cout << "Cute dog object created with type " << this->getType() << " from object of type " << src.getType() << std::endl;
	return ;
}

Dog ::~Dog(void){
	std::cout << "Cute dog object with type " << this->getType() << " got gently destroyed." << std::endl;
	return ;
}

Dog & Dog::operator=(Dog const &rhs){
	this->_type = rhs.getType();
	return *this;
}

void	Dog::makeSound(void) const{
	std::cout << "Bark !" << std::endl;
	return ;
}