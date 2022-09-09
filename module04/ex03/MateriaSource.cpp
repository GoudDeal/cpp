/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 23:11:32 by dcyprien          #+#    #+#             */
/*   Updated: 2022/08/12 15:06:42 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Materia.hpp"

MateriaSource::MateriaSource(void){
	for (int i = 0; i < 4; i++)
		this->_list[i] = NULL;
	return ;
}

MateriaSource::MateriaSource(MateriaSource const & src){
	for (int i = 0; i < 4; i++){
		delete this->_list[i];
		this->_list[i] = src.getMateria(i)->clone();
	}
	return ;
}

MateriaSource::~MateriaSource(void){
	for (int i = 0; i < 4; i++){
		delete this->_list[i];
	}
}

AMateria * MateriaSource::getMateria(int index)const{
	if (index < 0 || index > 3)
		return NULL;
	return this->_list[index];
}

void	MateriaSource::learnMateria(AMateria * m){
	for (int i = 0; i < 4; i++){
		if (this->getMateria(i) == NULL)
		{
			if (m->getType().compare("ice") == 0)
			{
				this->_list[i] = (reinterpret_cast<Ice *>(m));
				return ;
			}
			else if (m->getType().compare("cure") == 0)
			{
				this->_list[i] = (reinterpret_cast<Cure*>(m));
				return ;
			}
			else
				return ;
		}
	}
}

AMateria * MateriaSource::createMateria(std::string const & type){
	if (type.compare("ice") != 0 && type.compare("cure") != 0)
		return 0;
	for (int i = 0; i < 4; i++)
	{
		if (this->_list[i] && type.compare("ice") == 0 && this->_list[i]->getType().compare("ice") == 0)
			return new Ice(*(reinterpret_cast<const Ice*>(this->_list[i])));
		else if (this->_list[i] && type.compare("cure") == 0 && this->_list[i]->getType().compare("cure") == 0)
			return new Cure((*(reinterpret_cast<const Cure*>(this->_list[i]))));
	}
	return 0;
}