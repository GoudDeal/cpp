/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 21:38:17 by dcyprien          #+#    #+#             */
/*   Updated: 2022/08/13 00:24:51 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void): Form("ShrubberyCreationForm", 145, 137), _target("Default"){
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src): Form(src), _target(src.getTarget()){
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target): Form("ShrubberyCreationForm", 145, 137), _target(target){
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void){
	return ;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs){
	this->_target = rhs.getTarget();
	return *this;
}

void	ShrubberyCreationForm::beSigned(Bureaucrat const & employee){
	if (employee.getGrade() > this->getSign())
		throw Form::GradeTooLowException();
	this->setSignature();
	return ;
}

std::string ShrubberyCreationForm::getTarget(void)const{
	return this->_target;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
	if (!this->isSigned())
		throw ShrubberyCreationForm::FormNotSigned();
	if (this->getExec() < executor.getGrade())
		throw ShrubberyCreationForm::GradeTooLowException();
	std::ofstream output(this->getTarget().append("_shrubbery").c_str());
	std::string trees =
"		  oxoxoo    ooxoo   \n"
"  	    ooxoxo oo  oxoxooo  \n"
" 	   oooo xxoxoo ooo ooox \n"
" 	   oxo o oxoxo  xoxxoxo \n"
" 	    oxo xooxoooo o ooo  \n"
"    	   ooo\\oo\\  /o/o    \n"
"        	   \\  \\/ /      \n"
"         	   |   /        \n"
"         	   |  |         \n"
"         	   | D|         \n"
"         	   |  |         \n"
"			   |  |         \n"
"  		______/____\\____    \n";
	output << trees;
	return ;
}