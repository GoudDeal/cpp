/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:08:08 by dcyprien          #+#    #+#             */
/*   Updated: 2022/07/30 23:06:31 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): _brain(new Brain){
	this->_type = "Cat";
	std::cout << "Cute cat object created with type Cat" << std::endl;
	return ;
}

Cat::Cat(Cat const &src):  _brain(new Brain(*src.getBrain())){
	this->_type = src.getType();
	std::cout << "Cute cat object created with type Cat from object of type " << src.getType() << std::endl;
	return ;
}

Cat ::~Cat(void){
	std::cout << "Cute cat object with type Cat got gently destroyed." << std::endl;
	delete this->_brain;
	return ;
}

Brain * Cat::getBrain(void) const{
	return this->_brain;
}

std::string Cat::getType(void) const{
	return this->_type;
}

Cat & Cat::operator=(Cat const &rhs){
	this->_type = rhs.getType();
	delete this->_brain;
	this->_brain = rhs.getBrain();
	return *this;
}

void	Cat::makeSound(void) const{
	std::cout << "Meow ?" << std::endl;
	return ;
}