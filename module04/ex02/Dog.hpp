/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:15:22 by dcyprien          #+#    #+#             */
/*   Updated: 2022/07/30 17:22:50 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal{
	public:
		Dog(void);
		Dog(Dog const &src);
		~Dog(void);

		virtual std::string getType(void) const;
		void	makeSound(void) const;
		Brain * getBrain(void) const;

		Dog & operator=(Dog const &rhs);
	private:
		std::string	_type;
		Brain * _brain;
};

#endif