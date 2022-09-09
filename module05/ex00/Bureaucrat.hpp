/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 15:16:18 by dcyprien          #+#    #+#             */
/*   Updated: 2022/08/12 16:04:28 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>

class Bureaucrat {
	public:
		Bureaucrat(void);
		Bureaucrat(const Bureaucrat &src);
		Bureaucrat(const std::string name, const int grade);
		~Bureaucrat(void);

		std::string getName() const;
		int	getGrade() const;
		void setGrade(int grade);
		void incrementGrade(void);
		void decrementGrade(void);
		Bureaucrat & operator=(Bureaucrat const &rhs);
		

		class GradeTooHighException : public std::exception{
			public:
				virtual const char* what() const throw(){
					return("Exception : Grade too high");
				}
		};

		class GradeTooLowException : public std::exception{
			public:
				virtual const char* what() const throw(){
					return("Exception : Grade too low");
				}
		};
	private:
		const std::string _name;
		int	_grade;
};

std::ostream & operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif