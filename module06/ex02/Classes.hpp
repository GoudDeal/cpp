/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Classes.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 08:46:10 by dcyprien          #+#    #+#             */
/*   Updated: 2022/08/21 09:00:16 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSES_HPP
# define CLASSES_HPP

class Base{
	public:
		virtual ~Base(void);
};

class A: public Base{
	public:
		A(void);
};

class B: public Base{
	public:
		B(void);
};

class C: public Base{
	public:
		C(void);

};

#endif