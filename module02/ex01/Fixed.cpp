/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:21:24 by dcyprien          #+#    #+#             */
/*   Updated: 2022/07/21 20:16:22 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed (void): _num(0){
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed (const float num): _num(roundf(num * (1 << this->_fraction))){
	std::cout << "Float constructor called" << std::endl;
	return ;
}

Fixed::Fixed (int const num): _num(num << this->_fraction){
	std::cout << "Int constructor called" << std::endl;
	return;
}

Fixed::Fixed (Fixed const &src): _num(src._num){
	std::cout << "Copy constructor called" << std::endl;
	return ;
}

Fixed::~Fixed (void){
	std::cout << "Destructor called" << std::endl;
	return ;
}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;	
	return this->_num;
}

void Fixed::setRawBits(int const raw){
	this->_num = raw;
	return ;
}

float Fixed::toFloat(void) const{
	return ((float)(this->_num / (float)(1 << this->_fraction)));
}

int	Fixed::toInt(void) const{
	return (this->_num >> this->_fraction);
}

std::ostream & operator<<(std::ostream &o, Fixed const &rhs){
	o << rhs.toFloat();
	return (o);
}

Fixed & Fixed::operator=(Fixed const &rhs){
	std::cout << "Copy assignment operator called" << std::endl;
	this->_num = rhs.getRawBits();

	return *this;
}