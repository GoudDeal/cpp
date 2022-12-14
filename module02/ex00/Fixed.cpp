/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:21:24 by dcyprien          #+#    #+#             */
/*   Updated: 2022/07/21 17:41:36 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// const int Fixed::_fraction = 8;

Fixed::Fixed (void): _num(0){
	std::cout << "Default constructor called" << std::endl;
	return ;
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

Fixed & Fixed::operator=(Fixed const &rhs){
	std::cout << "Copy assignment operator called" << std::endl;
	this->_num = rhs.getRawBits();

	return *this;
}