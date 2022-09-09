/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 21:29:12 by dcyprien          #+#    #+#             */
/*   Updated: 2022/08/13 00:16:15 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>

class Form;
class Bureaucrat;

class RobotomyRequestForm: virtual public Form{
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(const RobotomyRequestForm &src);
		RobotomyRequestForm(std::string const target);
		~RobotomyRequestForm(void);

		RobotomyRequestForm & operator=(RobotomyRequestForm const &rhs);

		void beSigned(Bureaucrat const & employee);
		void execute(Bureaucrat const & executor)const;
		std::string getTarget(void)const;
	private:
		std::string _target;
};

#endif