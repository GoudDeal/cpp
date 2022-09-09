/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 21:18:24 by dcyprien          #+#    #+#             */
/*   Updated: 2022/08/14 03:03:34 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <iostream>

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed d(2147483647);

	std::cout << d << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
	std::cout << "End of provided test main, starting customs tests" << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
	std::cout << "Dividing a by b :" << a / b << std::endl << std::endl;
	Fixed c (b);
	std::cout << "Creating a Fixed instance by copy of b" << std::endl << std::endl << "Incrementing a instance until it is higher or equivalent to 2" << std::endl << std::endl;
	while (a <= 2)
		a++;
	std::cout << "Dividing c (copy of b) by a : " << c / a << std::endl << std::endl;
	std::cout << "Min function called with a and b : " << Fixed::min( a, b ) << std::endl << std::endl;
	return 0;
}