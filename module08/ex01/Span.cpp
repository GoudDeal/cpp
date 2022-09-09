/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 00:43:27 by dcyprien          #+#    #+#             */
/*   Updated: 2022/09/08 21:41:44 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void): _lst(0), _max(0), _size(0){
	return;
}

Span::Span(Span const &src): _lst(src._size), _max(src._max), _size(0){
	for (std::vector<int>::const_iterator it = src._lst.begin(); it < src._lst.end(); it++){
		_lst.push_back(*it);
		_size++;
	}
}

Span::Span(unsigned int const n): _lst(0), _max(n), _size(0){
	return ;
}

Span::~Span(void){
	return ;
}

Span & Span::operator=(Span const &rhs){
	this->_size = 0;
	for (std::vector<int>::const_iterator it = rhs._lst.begin(); it < rhs._lst.end(); it++){
		this->_lst.push_back(*it);
		this->_size++;
	}
	return *this;
}

void	Span::addNumber(int const n){
	if (this->_size < this->_max)
	{
		this->_lst.push_back(n);
		this->_size++;
	}
	else
		throw Span::ExceedingMaxSize();
}

unsigned int Span::shortestSpan(void)const{
	if (this->_size <= 1)
	{
		throw Span::NotEnoughNumber();
		return 0;
	}
	std::vector<int> sorted(this->_lst);
	std::sort(sorted.begin(), sorted.end());
	int diff = std::numeric_limits<int>::max();
	
	for (std::vector<int>::iterator it = sorted.begin(); it < sorted.end() - 1; it++){
		for (std::vector<int>::iterator itf = it + 1; itf < sorted.end(); itf++){
			if (abs(*it - *itf) < diff)
				diff = abs(*it - *itf);
		}
	}
	return (diff);
}

unsigned int Span::longestSpan(void)const{
	if (this->_size <= 1)
	{
		throw Span::NotEnoughNumber();
		return 0;
	}
	return (*std::max_element(this->_lst.begin(), this->_lst.end()) - *std::min_element(this->_lst.begin(), this->_lst.end()));
}

void	Span::addNNumbers(int const *list, int const len){
	if (this->_size + len > this->_max)
	{
		throw Span::ExceedingMaxSize();
		return;
	}
	this->_lst.insert(this->_lst.end(), list, list + len);
	this->_size += len;
}

void	Span::print(void)const{
	for (std::vector<int>::const_iterator it = this->_lst.begin(); it < this->_lst.end(); it++){
		std::cout << *it << std::endl;
	}
}