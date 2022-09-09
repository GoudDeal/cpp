/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:15:22 by dcyprien          #+#    #+#             */
/*   Updated: 2022/07/25 18:59:40 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal{
	public:
		Dog(void);
		Dog(Dog const &src);
		~Dog(void);

		void	makeSound(void) const;
		Brain * getBrain(void) const;

		Dog & operator=(Dog const &rhs);
	private:
		Brain * _brain;
};

#endif