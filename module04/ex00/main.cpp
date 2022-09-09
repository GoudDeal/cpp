/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:16:43 by dcyprien          #+#    #+#             */
/*   Updated: 2022/07/25 17:52:07 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void){
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << j->getType() << " " << std::endl; //return Dog type
	std::cout << i->getType() << " " << std::endl; //return Cat type
	i->makeSound(); //output the cat sound!
	j->makeSound(); //output the dog sound
	meta->makeSound(); //output animal sound

	const Animal* k = new Cat();
	const Animal* m = new Dog();
	const Animal* l;

	l = k;
	std::cout << l->getType() << " " << std::endl;
	l->makeSound();
	l = m;
	std::cout << l->getType() << " " << std::endl;
	l->makeSound();
	std::cout << std::endl << "Deleting k of (logically) type Cat" << std::endl;
	delete k;
	std::cout << std::endl << "Deleting m of (logically) type Dog" << std::endl;
	delete m;
	const Cat *n = new Cat();
	l = new Cat(*n);
	std::cout << l->getType() << " " << std::endl;
	l->makeSound();
	std::cout << std::endl << "Deleting n of (logically) type Cat " << std::endl;
	delete n;
	std::cout << std::endl << "Deleting l of (logically) type Cat" << std::endl;
	delete l;
	std::cout << std::endl << "Deleting j of (logically) type Dog" << std::endl;
	delete j;
	std::cout << std::endl << "Deleting i of (logically) type Cat" << std::endl;
	delete i;
	std::cout << std::endl << "Deleting meta of (logically) type Animal" << std::endl;
	delete meta;


	// const WrongAnimal* meta = new WrongAnimal();
	// const Animal* j = new Dog();
	// const WrongAnimal* i = new WrongCat();
	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// i->makeSound(); //will output the cat sound!
	// j->makeSound();
	// meta->makeSound();
	// delete meta;
	// delete j;
	// delete i;

	// return 0;
	return 0;
}