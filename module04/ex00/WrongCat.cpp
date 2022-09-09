/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:47:06 by dcyprien          #+#    #+#             */
/*   Updated: 2022/07/25 17:50:50 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void){
	this->_type = "WrongCat";
	std::cout << "Ugly weird WrongCat object created with type " << this->getType() << std::endl;
	return ;
}

WrongCat::WrongCat(WrongCat const &src): WrongAnimal(src){
	this->_type = src.getType();
	std::cout << "Ugly weird WrongCat object created with type " << this->getType() << " from object of type " << src.getType() << std::endl;
	return ;
}

WrongCat ::~WrongCat(void){
	std::cout << "Ugly weird WrongCat object with type " << this->getType() << " got absolutely destroyed." << std::endl;
	return ;
}

WrongCat & WrongCat::operator=(WrongCat const &rhs){
	this->_type = rhs.getType();
	return *this;
}