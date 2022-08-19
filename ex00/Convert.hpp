/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 15:29:41 by dcyprien          #+#    #+#             */
/*   Updated: 2022/08/19 17:42:46 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <string>
#include <iostream>

class Convert {
	public:
		Convert(void);
		Convert(Convert const &src);
		Convert(float n);
		~Convert(void);

		Convert & operator=(Convert const & rhs);

		char toChar()const;
		int	toInt()const;
		double	toDouble()const;
		float	toFloat()const;
		bool	isPrintable()const;
		float	getFloat()const;

	private:
		float _n;
};

#endif