/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:39:47 by dcyprien          #+#    #+#             */
/*   Updated: 2022/09/03 14:24:19 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main( void ) {
	char tab[10] = {'a','b','c','d','e','f','g','h','i','j'};
	int inttab[10] = {0,1,2,3,4,5,6,7,8,9};

	::iter<char>(tab, 10, ::addTwo<char>);
	for (int i = 0; i < 10; i++){
		std::cout << tab[i];
	}
	 std::cout << std::endl;
	::iter<int>(inttab, 10, ::addTwo<int>);
	for (int i = 0; i < 10; i++){
		std::cout << inttab[i];
	}
	std::cout << std::endl;
	return 0;
}