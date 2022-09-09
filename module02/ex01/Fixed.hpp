/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:07:15 by dcyprien          #+#    #+#             */
/*   Updated: 2022/07/21 20:24:43 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <math.h>

class Fixed {

	public:
		Fixed (void);
		Fixed (Fixed const &src);
		Fixed (int const num);
		Fixed (float const num);
		~Fixed (void);
		int 	getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		
		Fixed & operator=(Fixed const &rhs);

	private:
		int	_num;
		static const int	_fraction = 8;
};

std::ostream & operator<<(std::ostream &o,Fixed const &rhs);

#endif