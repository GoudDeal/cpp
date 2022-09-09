/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 16:42:24 by dcyprien          #+#    #+#             */
/*   Updated: 2022/06/15 16:09:53 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include "Contact.hpp"
#include <stdlib.h>
#include <unistd.h>
#include <string>
#include <limits>
#include <climits>
#include <cstdio>

class Phonebook {


public:

	static int num;
	Phonebook( void );
	~Phonebook( void );
	void	search();
	void	del(int num);
	void	add();

private:
	Contact _list[8];
	int		_strisdigit(std::string str);
};

#endif