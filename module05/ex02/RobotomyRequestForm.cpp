/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 21:30:20 by dcyprien          #+#    #+#             */
/*   Updated: 2022/08/13 15:33:38 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): Form("RobotomyRequestForm", 72, 45), _target("Default"){
	srand((unsigned int)time(NULL));
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src): Form(src), _target(src.getTarget()){
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const target): Form("RobotomyRequestForm", 72, 45), _target(target){
	srand((unsigned int)time(NULL));
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void){
	return ;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs){
	this->_target = rhs.getTarget();
	return *this;
}

void	RobotomyRequestForm::beSigned(Bureaucrat const & employee){
	if (employee.getGrade() > this->getSign())
		throw Form::GradeTooLowException();
	this->setSignature();
	return ;
}

std::string RobotomyRequestForm::getTarget(void)const{
	return this->_target;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const{
	if (!this->isSigned())
		throw RobotomyRequestForm::FormNotSigned();
	if (this->getExec() < executor.getGrade())
		throw RobotomyRequestForm::GradeTooLowException();
	std::cout << "DZRIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII" << std::endl;
	if ((rand() % (9 - 0 + 1)) % 2 == 0)
		std::cout << this->_target << " was robotomised succesfully." << std::endl;
	else
		std::cout << "The robotomy was a failure." << std::endl;
}