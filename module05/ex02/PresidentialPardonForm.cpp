/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 18:58:09 by dcyprien          #+#    #+#             */
/*   Updated: 2022/08/13 00:03:47 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): Form("PresidentialPardonForm", 25, 5), _target("Default"){
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src): Form(src), _target(src.getTarget()){
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const target): Form("PresidentialPardonForm", 25,5), _target(target){
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void){
	return ;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs){
	this->_target = rhs.getTarget();
	return *this;
}

void	PresidentialPardonForm::beSigned(Bureaucrat const & employee){
	if (employee.getGrade() > this->getSign())
		throw Form::GradeTooLowException();
	this->setSignature();
	return ;
}

std::string PresidentialPardonForm::getTarget(void)const{
	return this->_target;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const{
	if (!this->isSigned())
		throw PresidentialPardonForm::FormNotSigned();
	if (this->getExec() < executor.getGrade())
		throw PresidentialPardonForm::GradeTooLowException();
	std::cout << this->getTarget() << " was forgiven by Zaphod Beeblebrox." << std::endl;
}