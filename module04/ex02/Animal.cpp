/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:58:44 by dcyprien          #+#    #+#             */
/*   Updated: 2022/07/30 17:42:13 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::~AAnimal(void){
	std::cout << "Object Animal destroyed" << std::endl;
	return ;
}

void	AAnimal::makeSound(void) const{
	std::cout << "*random animal noises*" << std::endl;
}
