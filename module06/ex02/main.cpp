/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 08:45:53 by dcyprien          #+#    #+#             */
/*   Updated: 2022/08/21 09:12:34 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Classes.hpp"
#include <iostream>
#include <time.h>
#include <cstdlib>

int	getRand(int range){
	int num = 0 + (rand() % range);
	return (num);
}

Base * generate(void){
switch (getRand(3))
	{
		case (0):
			return (new A());
		case (1):
			return (new B());
		case(2):
			return (new C());
		default:
			return (new A());
	}
}

void	identify(Base *p){
	Base * ptr;
	if ((ptr = dynamic_cast<A*>(p)))
		std::cout << "Object is of type A" << std::endl;
	if ((ptr = dynamic_cast<B*>(p)))
		std::cout << "Object is of type B" << std::endl;
	if ((ptr = dynamic_cast<C*>(p)))
		std::cout << "Object is of type C" << std::endl;
}

void	identify(Base &p){
	try
	{
		Base & ptr = dynamic_cast<A&>(p);
		(void)ptr;
		std::cout << "Object is of type A" << std::endl;
	}
	catch (std::exception &e){}
	try
	{
		Base & ptr = dynamic_cast<B&>(p);
		(void)ptr;
		std::cout << "Object is of type B" << std::endl;
	}
	catch (std::exception &e){}
	try
	{
		Base & ptr = dynamic_cast<C&>(p);
		(void)ptr;
		std::cout << "Object is of type C" << std::endl;
	}
	catch (std::exception &e){}
}

int main(void){
	Base *ptr;
	srand((unsigned int)time(NULL));
	ptr = generate();
	identify(ptr);
	Base & ref = *ptr;
	identify(ref);
	return 1;
}