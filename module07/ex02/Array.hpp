/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 15:05:37 by dcyprien          #+#    #+#             */
/*   Updated: 2022/09/07 20:10:52 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <stdexcept>

template<typename T>
class Array{
	public:
		Array<T>(void): _array(new T[0]), _size(0){
			return;
		}

		Array<T>( const unsigned int n): _array(new T[n]), _size(n){
			for (unsigned int i = 0; i < n; i++){
				_array[i] = T();
			}
			return;
		}

		Array<T>( Array const &src): _array(new T[src._size]), _size(src._size){
			for (unsigned int i = 0; i < _size; i++){
				try {
					_array[i] = src[i];
				}
				catch (std::out_of_range &oor){
					delete [] _array;
					std::cout << oor.what() << std::endl;
				}
			}
		}

		~Array<T>(void){
			delete [] _array;
			return ;
		}

		void printAdress(void)const{
			std::cout << this->_array << std::endl;
		}
		void	printArray(void){
			for (unsigned int i = 0; i < _size; i++){
				std::cout << "Index = " << i << "| Value = " << (*this)[i] << std::endl;
			}
		}

		T	&operator[](unsigned int const &idx)const{
			if (idx < 0 || idx >= _size)
				throw std::out_of_range("Out of range index");
			return _array[idx];
		}

		unsigned int size(void) const{
			return this->_size;
		}

		Array<T> & operator=(Array<T> const &rhs){
			if (this->size() != rhs.size())
			{
				delete [] this->_array;
				this->_array = new T[rhs.size()];
				this->_size = rhs.size();
			}
			for (unsigned int i = 0; i < rhs.size(); i++){
				(*this)[i] = rhs[i];
			}
			return *this;
		}
	private:
		T *_array;
		unsigned int _size;
};

#endif