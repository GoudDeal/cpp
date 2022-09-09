/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 00:42:14 by dcyprien          #+#    #+#             */
/*   Updated: 2022/09/08 21:52:15 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <utility>
#include <limits>
#include <exception>

class Span{
	public:
		Span(void);
		Span(Span const &src);
		Span(unsigned int const n);
		~Span(void);

		void	addNumber(int const n);
		void	addNNumbers(int const *list, int const len);
		void	print()const;
		unsigned int	shortestSpan(void) const;
		unsigned int	longestSpan(void) const;

		class NotEnoughNumber: public std::exception{
			public:
				virtual const char* what() const throw(){
					return ("Not enough number to return a distance.");
				}
		};

		class ExceedingMaxSize: public std::exception{
			public:
				virtual const char* what() const throw(){
					return ("Span already at max capacity or adding number would exceed max capacity");
				}
		};
		Span & operator=(Span const &rhs);

	private:
		std::vector<int> _lst;
		unsigned int	_max;
		unsigned int	_size;
};

#endif