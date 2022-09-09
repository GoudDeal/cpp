/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 18:18:24 by dcyprien          #+#    #+#             */
/*   Updated: 2022/06/24 21:11:02 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

enum	e_levels{
	DEBUG,
	INFO,
	WARNING,
	ERROR
};

class Harl{

private:
	void		_debug(void);
	void		_info(void);
	void		_warning(void);
	void		_error(void);
	int			_getLevels(std::string levels)const;
	void		(Harl::*_functions[4])(void);
	std::string	_complaints[4];

public:
	Harl(void);
	~Harl(void);
	void	complain(std::string level);
};

#endif