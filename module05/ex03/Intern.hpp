/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 15:47:18 by dcyprien          #+#    #+#             */
/*   Updated: 2022/08/13 17:14:54 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <algorithm>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <cctype>

class Form;

class Intern{
	public:
		Intern(void);
		Intern(Intern const &src);
		~Intern(void);

		Intern & operator=(Intern const & rhs);

		Form * makeForm(std::string form, std::string target);
		
		class InvalidForm: public std::exception{
			const char * what() const throw(){
				return ("Invalid form.");
			}
		};
		class InvalidTarget: public std::exception{
			const char * what() const throw(){
				return ("Invalid target.");
			}
		};
};

#endif