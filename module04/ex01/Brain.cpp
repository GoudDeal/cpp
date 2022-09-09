/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:54:48 by dcyprien          #+#    #+#             */
/*   Updated: 2022/07/26 13:52:12 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void){
	std::cout << "Creating a brain that can count up to 100 !" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		std::stringstream out;
		out << i;
		this->_ideas[i] = out.str();
	}
	return ;
}

Brain::Brain(Brain const &src){
	std::cout << "Creating a brain copying another brain to learn how to count" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = src.getIdea(i);
	return ;
}

Brain::~Brain(void){
	std::cout << "Forgetting how to count..." << std::endl;
	return;
}

std::string Brain::getIdea(int index)const{
	if (index <= 99 && index >= 0)
		return this->_ideas[index];
	return "I have no idea.";
}

Brain & Brain::operator=(Brain const &rhs){
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = rhs.getIdea(i);
	return *this;
}