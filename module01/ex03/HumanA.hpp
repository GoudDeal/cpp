/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 14:56:17 by dcyprien          #+#    #+#             */
/*   Updated: 2022/06/23 16:40:47 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA{

private:
	std::string	_name;
	Weapon&		_weapon;

public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA(void);
	void	attack(void) const;
};

#endif