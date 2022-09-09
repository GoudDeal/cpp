/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 16:33:21 by dcyprien          #+#    #+#             */
/*   Updated: 2022/08/12 23:32:46 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include <iostream>

class Bureaucrat;

class Form {
	public:
		Form(void);
		Form(const Form & src);
		Form(const std::string name, int sign, int exec);
		~Form(void);

		bool isSigned() const;
		std::string getName() const;
		int	getSign() const;
		int getExec() const;
		void setSignature(void);
		void setSign(int sign);
		void setExec(int exec);
		virtual void execute(Bureaucrat const & executor)const = 0;
		virtual void beSigned(Bureaucrat const & employee) = 0;
		Form & operator=(const Form & rhs);

		class GradeTooHighException: public std::exception{
			const char * what() const throw(){
				return ("Grade too high.");
			}
		};

		class GradeTooLowException: public std::exception{
			const char * what() const throw(){
				return ("Grade too low.");
			}
		};
		class FormNotSigned: public std::exception{
			const char * what() const throw(){
				return ("Form is not signed.");
			}
		};
	private:
		bool _signature;
		const std::string _name;
		int	_sign;
		int _exec;
};

std::ostream & operator<<(std::ostream &o, Form const &rhs);

#endif