/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 16:11:59 by dcyprien          #+#    #+#             */
/*   Updated: 2022/06/16 17:17:13 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>
# include <stdlib.h>

class Zombie {

private:
	std::string	_name;

public:
	Zombie(void);
	~Zombie(void);

	void		announce(void) const;
	std::string	getName() const;
	Zombie*		zombieHorde(int n , std::string name);
	void		setName(std::string name);
};

#endif