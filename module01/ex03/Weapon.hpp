/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 14:46:13 by dcyprien          #+#    #+#             */
/*   Updated: 2022/06/23 16:41:40 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon{

private:
	std::string _type;
		
public:
	Weapon(std::string type);
	~Weapon(void);
	const std::string&	getType(void) const;
	void				setType(std::string type);
	
};

#endif