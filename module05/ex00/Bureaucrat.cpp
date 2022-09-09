/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 15:16:20 by dcyprien          #+#    #+#             */
/*   Updated: 2022/08/12 16:01:57 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): _name("Default"), _grade(150){
	return ;
}

Bureaucrat::Bureaucrat(const std::string name, const int grade): _name(name){
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src): _name(src.getName()), _grade(src.getGrade()){
	return ;
}

Bureaucrat::~Bureaucrat(void){
	return ;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const &rhs){
	this->setGrade(rhs.getGrade());
	return *this;
}

std::string Bureaucrat::getName(void) const{
	return this->_name;
}

int	Bureaucrat::getGrade(void) const{
	return this->_grade;
}

void	Bureaucrat::setGrade(int grade){
	this->_grade = grade;
}

void	Bureaucrat::incrementGrade(void){
	if (this->getGrade() == 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void	Bureaucrat::decrementGrade(void){
	if (this->getGrade() == 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

std::ostream & operator<<(std::ostream &o, Bureaucrat const &rhs){
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
	return (o);
}