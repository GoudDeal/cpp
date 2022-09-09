/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 21:47:13 by dcyprien          #+#    #+#             */
/*   Updated: 2022/07/31 04:50:06 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Materia.hpp"
#include "Character.hpp"

Ice::Ice(void){
	this->_type = "ice";
	return ;
}

Ice::Ice(Ice const & src){
	this->_type = src.getType();
	return ;
}

Ice::~Ice(void){
	return ;
}

void	Ice::use(ICharacter & target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return ;
}

void	Ice::setType(std::string const type){
	this->_type = type;
	return ;
}

AMateria* Ice::clone(void)const{
	AMateria * clone = new Ice(*this);
	return clone;
}

Ice & Ice::operator=(Ice const &rhs){
	this->setType(rhs.getType());
	return *this;
}