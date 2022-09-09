/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:26:42 by dcyprien          #+#    #+#             */
/*   Updated: 2022/09/03 13:30:25 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP

#include <string>
#include <iostream>

template< typename T>
void	swap(T & a1, T & a2){
	T tmp = a1;
	a1 = a2;
	a2 = tmp;
	return ;
}

template< typename T>
T const &	min(T const &a1, T const &a2){
	return (a1 < a2 ? a1 : a2);
}

template< typename T>
T const &	max(T const &a1, T const &a2){
	return (a1 > a2 ? a1 : a2);
}

template< typename T, typename U>
T const &	max(T const &a1, U const &a2){
	(void)a1;
	(void)a2;
	throw std::string("Argument are not of same type.");
	return (a1);
}

template< typename T, typename U>
T const &	min(T const &a1, U const &a2){
	(void)a1;
	(void)a2;
	throw std::string("Argument are not of same type.");
	return (a1);
}

template< typename T, typename U>
void	swap(T & a1, U & a2){
	(void)a1;
	(void)a2;
	throw std::string("Argument are not of same type.");
}

#endif