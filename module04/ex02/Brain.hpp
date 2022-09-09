/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:54:46 by dcyprien          #+#    #+#             */
/*   Updated: 2022/07/25 18:15:36 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>
#include <sstream>

class Brain{
	public:
		Brain(void);
		Brain(Brain const &src);
		~Brain(void);

		std::string	getIdea(int index) const;

		Brain & operator=(Brain const &rhs);
	protected:
		std::string _ideas[100];
};

#endif