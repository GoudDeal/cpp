/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:56:36 by dcyprien          #+#    #+#             */
/*   Updated: 2022/07/25 16:57:04 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
	public:
		Animal(void);
		Animal(Animal const &src);
		virtual ~Animal(void);

		std::string getType(void) const;
		virtual void	makeSound(void) const;

		Animal & operator=(Animal const &rhs);
	protected:
		std::string _type;
};

#endif