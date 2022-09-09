/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:06:48 by dcyprien          #+#    #+#             */
/*   Updated: 2022/07/25 18:57:16 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal{
	public:
		Cat(void);
		Cat(Cat const &src);
		~Cat(void);

		void	makeSound(void) const;
		Brain * getBrain(void) const;

		Cat & operator=(Cat const &rhs);
	private:
		Brain * _brain;
};

#endif