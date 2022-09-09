/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:39:47 by dcyprien          #+#    #+#             */
/*   Updated: 2022/09/07 20:10:14 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main( void ) {
	Array<int> test(10);
	Array<int> test2(test);
	Array<int> test3(15);

	try{
		std::cout << "Try and catch of an out of range index" << std::endl;
		test[11];
	}
	catch (std::out_of_range &oor){
		std::cout << "Exception caught" << std::endl;
		std::cout << oor.what() << std::endl;
	}
	int i = 0;
	int k = 42;
	std::cout << std::endl << "Modifying value of test until \"Out of range exception\"" << std::endl;
	while (i < 11)
	{
		try{
			test[i] = k;
		}
		catch (std::out_of_range &oor){
			std::cout << "Exception caught" << std::endl;
			std::cout << oor.what() << std::endl;
			break;
		}
		i++;
		k++;
	}
	std::cout << std::endl << "Size test = " << test.size() << " Size test2 = " << test2.size() << " Size test3 = " << test3.size() << std::endl;
	std::cout << "-----------------------------------------" << std::endl << "Printing test" << std::endl;
	test.printArray();
	std::cout << std::endl;
	std::cout << "-----------------------------------------" << std::endl << "Printing test2" << std::endl;
	test2.printArray();
	test2 = test;
	std::cout << "-----------------------------------------" << std::endl<< "Assignment operator testing test2 = test" << std::endl << "Printing test2 again" << std::endl;
	test2.printArray();
	std::cout << std::endl;
	std::cout << "-----------------------------------------" << std::endl << "Printing test3" << std::endl;
	test3.printArray();
	std::cout << "-----------------------------------------" << std::endl<< "Assignment operator testing with arrays of different size" << std::endl << "test3 = test2" << std::endl << "Printing test3" << std::endl;
	test3 = test2;
	test3.printArray();
	std::cout << std::endl;
	test.printAdress();
	test2.printAdress();
	test3.printAdress();
	return 0;
}