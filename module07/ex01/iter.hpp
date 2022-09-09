/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 13:32:13 by dcyprien          #+#    #+#             */
/*   Updated: 2022/09/03 14:19:09 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>

template<typename T>
void	addTwo(T & ref){
	ref += 2;
}

template<typename T>
void	iter(T *tab, int size, void (*f)(T &)){
	for (int i = 0; i < size; i++){
		f(tab[i]);
	}
}

#endif