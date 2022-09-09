/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:21:24 by dcyprien          #+#    #+#             */
/*   Updated: 2022/07/21 21:40:22 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed (void): _num(0){
	return ;
}

Fixed::Fixed (const float num): _num(roundf(num * (1 << this->_fraction))){
	return ;
}

Fixed::Fixed (int const num): _num(num << this->_fraction){
	return;
}

Fixed::Fixed (Fixed const &src): _num(src._num){
	return ;
}

Fixed::~Fixed (void){
	return ;
}

int	Fixed::getRawBits(void) const {
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
	this->_num = rhs.getRawBits();

	return *this;
}

bool	operator<(Fixed const &lhs, Fixed const &rhs){
	if (lhs.toFloat() < rhs.toFloat())
		return true;
	return false;
}

bool	operator>(Fixed const &lhs, Fixed const &rhs){
	if (lhs.toFloat() > rhs.toFloat())
		return true;
	return false;
}

bool	operator>=(Fixed const &lhs, Fixed const &rhs){
	if (lhs.toFloat() >= rhs.toFloat())
		return true;
	return false;
}

bool	operator<=(Fixed const &lhs, Fixed const &rhs){
	if (lhs.toFloat() <= rhs.toFloat())
		return true;
	return false;
}

bool	operator==(Fixed const &lhs, Fixed const &rhs){
	if (lhs.toFloat() == rhs.toFloat())
		return true;
	return false;
}

bool	operator!=(Fixed const &lhs, Fixed const &rhs){
	if (lhs.toFloat() != rhs.toFloat())
		return true;
	return false;
}

Fixed & Fixed::operator+(Fixed const &rhs){
	this->_num += rhs.toInt();
	return *this;
}

Fixed &	Fixed::operator-(Fixed const &rhs){
	this->_num -= rhs.toInt();
	return *this;
}

Fixed &	Fixed::operator*(Fixed const &rhs){
	this->_num *= rhs.toInt();
	return *this;
}

Fixed &	Fixed::operator/(Fixed const &rhs){
	this->_num /= rhs.toInt();
	return *this;
}

Fixed & Fixed::operator++(void){
	this->_num += 1;
	return *this;
}

Fixed	Fixed::operator++(int){
	Fixed tmp(*this);
	operator++();
	return tmp;
}

Fixed & Fixed::operator--(void){
	this->_num -= 1;
	return *this;
}

Fixed	Fixed::operator--(int){
	Fixed tmp(*this);
	operator--();
	return tmp;
}

Fixed const &	Fixed::min(Fixed const &f1, Fixed const &f2){
	return (f1 < f2 ? f1 : f2);
}

Fixed &	Fixed::min(Fixed &f1, Fixed &f2){
	return (f1 < f2 ? f1 : f2);
}

Fixed const &	Fixed::max(Fixed const &f1, Fixed const &f2){
	return (f1 > f2 ? f1 : f2);
}

Fixed &	Fixed::max(Fixed &f1, Fixed &f2){
	return (f1 > f2 ? f1 : f2);
}