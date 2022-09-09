/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 16:11:59 by dcyprien          #+#    #+#             */
/*   Updated: 2022/06/16 16:33:25 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie {

private:
	std::string	_name;

public:
	Zombie(std::string name);
	~Zombie(void);

	void		announce(void);
	std::string	getName() const;
	Zombie*		newZombie(std::string name);
	void		randomChump(std::string name);
};

#endif