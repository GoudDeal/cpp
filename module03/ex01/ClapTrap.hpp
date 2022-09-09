/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 16:51:55 by dcyprien          #+#    #+#             */
/*   Updated: 2022/07/22 19:43:48 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
	public:
		ClapTrap (void);
		ClapTrap (ClapTrap const &src);
		ClapTrap(std::string const name);
		~ClapTrap(void);

		int		getHp() const;
		int		getAp() const;
		int		getAd() const;
		std::string	getName() const;
		void 	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void 	beRepaired(unsigned int amount);
		ClapTrap & operator=(ClapTrap const &rhs);

	protected:
		std::string	_name;
		int			_hp;
		int			_ap;
		int			_ad;
};

#endif