/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 22:02:36 by dcyprien          #+#    #+#             */
/*   Updated: 2022/09/08 00:40:16 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void){
	std::list<int>	lst;
	std::list<int>::iterator	it;

	lst.push_back(1);
	lst.push_back(2);
	lst.push_back(3);
	lst.push_back(4);
	lst.push_back(5);
	lst.push_back(6);
	lst.push_back(7);
	lst.push_back(8);
	lst.push_back(9);
	lst.push_back(10);
	lst.push_back(11);

	try{
		it = easyfind<std::list<int> >(lst, 5);
	}
	catch(const std::exception& e){
		std::cout << "Could not find occurence" << std::endl;
	}
	std::cout << *it << std::endl;

	try{
		it = easyfind<std::list<int> >(lst, 12);
	}
	catch (std::exception &e){
		std::cout << "could not find occurence" << std::endl;
	}
	return 0;
}