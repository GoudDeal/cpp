/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 13:04:02 by dcyprien          #+#    #+#             */
/*   Updated: 2022/07/24 13:09:02 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	public:
		FragTrap(void);
		FragTrap(FragTrap const &src);
		FragTrap(std::string const name);
		~FragTrap(void);

		void	attack(const std::string & target);
		void	highFiveGuys(void);
		FragTrap & operator=(FragTrap const &rhs);
};

#endif