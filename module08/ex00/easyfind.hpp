/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 21:48:52 by dcyprien          #+#    #+#             */
/*   Updated: 2022/09/07 23:38:02 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <iterator>
#include <vector>
#include <list>
#include <iostream>

template<typename T>
typename T::iterator easyfind(T t1, int n){
	typename T::iterator	it;


	if (std::binary_search(t1.begin(), t1.end(), n))
	{
		it = std::find(t1.begin(), t1.end(), n);
		return it;
	}
	else
		throw std::exception();
	return it;
}

#endif