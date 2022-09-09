/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 21:25:23 by dcyprien          #+#    #+#             */
/*   Updated: 2022/07/31 04:50:00 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Materia.hpp"

AMateria::AMateria(void): _type(""){
	return ;
}

AMateria::AMateria(std::string const & type): _type(type){
	return;
}

std::string const & AMateria::getType(void) const{
	return this->_type;
}

AMateria::~AMateria(void){
	return ;
}
