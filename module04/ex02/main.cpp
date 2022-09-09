/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 18:22:52 by dcyprien          #+#    #+#             */
/*   Updated: 2022/07/30 17:47:25 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	const AAnimal* j = new Dog();
	const Cat* i = new Cat();
	delete j;//should not create a leak
	Cat * l = new Cat(*(reinterpret_cast<const Cat*>(i)));
	const Dog * p = new Dog();
	delete i;
	for (int n = 0; n < 100; n++){
		std::cout << "A cat can count up to " << l->getBrain()->getIdea(n) << std::endl;
	}
	for (int n = 0; n < 100; n++){
		std::cout << "A dog can count up to " << p->getBrain()->getIdea(n) << std::endl;
	}
	delete p;
	delete l;
	return 0;
}