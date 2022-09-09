/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:15:22 by dcyprien          #+#    #+#             */
/*   Updated: 2022/07/25 16:30:59 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal{
	public:
		Dog(void);
		Dog(Dog const &src);
		~Dog(void);

		void	makeSound(void) const;

		Dog & operator=(Dog const &rhs);
};

#endif