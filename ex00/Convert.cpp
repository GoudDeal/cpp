/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 15:31:12 by dcyprien          #+#    #+#             */
/*   Updated: 2022/08/19 17:43:34 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(void): _n(0.0f){
	return ;
}

Convert::Convert(Convert const &src): _n(src.getFloat()){
	return ;
}

Convert::Convert(float n): _n(n){
	return ;
}

Convert::~Convert(void){
	return ;
}

Convert & Convert::operator=(Convert const &rhs){
	this->_n = rhs._n;
	return *this;
}

float		Convert::getFloat(void)const{
	return this->_n;
}

char	Convert::toChar()const{
	if (this->isPrintable())
		return static_cast<char>(this->_n);
	return (0);
}

int		Convert::toInt(void)const{
	return static_cast<int>(n);
}

bool	Convert::isPrintable()const{
	return (this->_n >= 32 && this->_n <= 126);
}