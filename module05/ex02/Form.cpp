/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 16:40:03 by dcyprien          #+#    #+#             */
/*   Updated: 2022/08/12 19:22:36 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void): _signature(false), _name("Default"), _sign(150), _exec(150){
	return ;
}

Form::Form(const Form & src): _signature(src.isSigned()), _name(src.getName()), _sign(src.getSign()), _exec(src.getExec()){
	return ;
}

Form::Form(const std::string name, int sign, int exec): _signature(false), _name(name){
	if (sign > 150 || exec > 150)
		throw Form::GradeTooLowException();
	if (sign < 1 || exec < 1)
		throw Form::GradeTooHighException();
	this->_sign = sign;
	this->_exec = exec;
	return ;
}

Form::~Form(void){
	return ;
}

Form & Form::operator=(const Form & rhs){
	if (rhs.isSigned())
		this->_signature = true;
	this->_sign = rhs.getSign();
	this->_exec = rhs.getExec();
	return *this;
}

bool	Form::isSigned() const{
	return (this->_signature == true ? true : false);
}

void	Form::setSignature(void){
	if (!this->_signature)
		this->_signature = true;
	return ;
}

std::string Form::getName() const{
	return this->_name;
}

int	Form::getSign()const{
	return this->_sign;
}

int Form::getExec()const{
	return this->_exec;
}

void	Form::setExec(int exec){
	this->_exec = exec;
}

void	Form::setSign(int sign){
	this->_sign = sign;
}

void	Form::beSigned(Bureaucrat const & employee){
	if (employee.getGrade() > this->getSign())
		throw Form::GradeTooLowException();
	this->_signature = true;
}

std::ostream & operator<<(std::ostream &o, Form const &rhs){
	o << rhs.getName() << " form. Grade required to sign " << rhs.getSign() << ". Grade required to execute " << rhs.getExec() << ".";
	return o;
}