/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:08:08 by dcyprien          #+#    #+#             */
/*   Updated: 2022/07/25 16:22:26 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void){
	this->_type = "Cat";
	std::cout << "Cute cat object created with type " << this->getType() << std::endl;
	return ;
}

Cat::Cat(Cat const &src): Animal(src){
	this->_type = src.getType();
	std::cout << "Cute cat object created with type " << this->getType() << " from object of type " << src.getType() << std::endl;
	return ;
}

Cat ::~Cat(void){
	std::cout << "Cute cat object with type " << this->getType() << " got gently destroyed." << std::endl;
	return ;
}

Cat & Cat::operator=(Cat const &rhs){
	this->_type = rhs.getType();
	return *this;
}

void	Cat::makeSound(void) const{
	std::cout << "Meow ?" << std::endl;
	return ;
}