/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 15:31:12 by dcyprien          #+#    #+#             */
/*   Updated: 2022/08/21 08:32:59 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(void){
	return ;
}

Convert::Convert(Convert const &src){
	static_cast<void>(src);
	return ;
}

Convert::~Convert(void){
	return ;
}

Convert & Convert::operator=(Convert const &rhs){
	static_cast<void>(rhs);
	return *this;
}

bool	Convert::isNum(char *av)const{
	std::string param = av;
	return (param.find_first_not_of("0123456789"));
}

bool	Convert::isChar(char *av)const{
	std::string param = av;
	return (param.size() == 1 && isalpha(param[0]));
}

float	Convert::toFloat(float f)const{
	return static_cast<float>(f);
}

double	Convert::toDouble(float f)const{
	return static_cast<float>(f);
}

int		Convert::toInt(double f)const{
	if (f == std::numeric_limits<float>::infinity() || f == -std::numeric_limits<float>::infinity() || std::isnan(f) )
		throw std::string ("impossible");
	return static_cast<int>(f);
}
char	Convert::toChar(float f)const{
	if (f == std::numeric_limits<float>::infinity() || f == -std::numeric_limits<float>::infinity() || std::isnan(f))
		throw std::string ("impossible");
	if (!this->isPrintable(f))
		throw std::string ("Non Displayable");
	return static_cast<char>(f);
}

bool	Convert::isPrintable(float f)const{
	return (f >= 32 && f <= 126);
}