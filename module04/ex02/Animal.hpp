/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:56:36 by dcyprien          #+#    #+#             */
/*   Updated: 2022/07/30 17:46:02 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal {
	public:
		virtual ~AAnimal(void);
		virtual std::string getType(void) const = 0;
		virtual void	makeSound(void) const = 0;
	protected:
		std::string _type;
};

#endif