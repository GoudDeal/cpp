/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:07:15 by dcyprien          #+#    #+#             */
/*   Updated: 2022/07/21 17:40:24 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {

	public:
		Fixed (void);
		Fixed (Fixed const &src);
		~Fixed (void);
		Fixed & operator=(Fixed const &rhs);
		int 	getRawBits(void) const;
		void	setRawBits(int const raw);
		
	private:
		int	_num;
		static const int	_fraction = 8;
};

#endif