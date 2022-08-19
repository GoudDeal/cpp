/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 15:29:41 by dcyprien          #+#    #+#             */
/*   Updated: 2022/08/19 18:34:31 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <string>
#include <iostream>
#include <limits>
#include <cmath>
#include <iomanip>
#include <cstdlib>

class Convert {
	public:
		Convert(void);
		Convert(Convert const &src);
		~Convert(void);

		Convert & operator=(Convert const & rhs);

		char toChar(float f)const;
		int	toInt(float f)const;
		double	toDouble(float f)const;
		float	toFloat(float f)const;
		bool	isPrintable(float f)const;
		bool	isNum(char *av)const;
		bool	isChar(char *av)const;
		class Impossible: std::exception{
			public:
				virtual const char * what() throw(){
				return ("Impossible Conversion");
			}
		};
};

#endif