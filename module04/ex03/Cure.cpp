/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 21:47:13 by dcyprien          #+#    #+#             */
/*   Updated: 2022/07/31 04:41:27 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Materia.hpp"
#include "Character.hpp"

Cure::Cure(void){
	this->_type = "cure";
	return ;
}

Cure::Cure(Cure const & src){
	this->_type = src.getType();
	return ;
}

Cure::~Cure(void){
	return ;
}

void	Cure::use(ICharacter & target){
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	return ;
}

void	Cure::setType(std::string const type){
	this->_type = type;
	return ;
}

AMateria* Cure::clone(void)const{
	AMateria * clone = new Cure(*this);
	return clone;
}

Cure & Cure::operator=(Cure const &rhs){
	this->setType(rhs.getType());
	return *this;
}