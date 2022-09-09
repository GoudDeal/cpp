/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:39:47 by dcyprien          #+#    #+#             */
/*   Updated: 2022/09/03 13:29:45 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Template.hpp"

int main( void ) {
	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	int e = 42;
	float f = 0.42f;

	try{
		::swap(e, f);
		std::cout << "e = " << e << ", f = " << f << std::endl;
	}
	catch ( std::string const &e ){
		std::cout << e << std::endl;
	}
	try{
		::min(e, f);
		std::cout << "e = " << e << ", f = " << f << std::endl;
	}
	catch ( std::string const &e ){
		std::cout << e << std::endl;
	}
	try{
		::max(e, f);
		std::cout << "e = " << e << ", f = " << f << std::endl;
	}
	catch ( std::string const &e ){
		std::cout << e << std::endl;
	}
	return 0;
}