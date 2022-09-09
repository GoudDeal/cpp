/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 15:48:51 by dcyprien          #+#    #+#             */
/*   Updated: 2022/08/13 17:39:33 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern(void){
	return ;
}

Intern::Intern(Intern const &src){
	(void)src;
	return ;
}

Intern::~Intern(void){
	return ;
}

Intern & Intern::operator=(Intern const &rhs){
	(void)rhs;
	return *this;
}

static Form * robotomy(std::string target){
	return (new RobotomyRequestForm(target));
}

static Form * presidential(std::string target){
	return (new PresidentialPardonForm(target));
}

static Form * shrubbery(std::string target){
	return (new ShrubberyCreationForm(target));
}

Form * Intern::makeForm(std::string form, std::string target){
	Form * (*fform[3])(std::string ftarget) = {robotomy, presidential, shrubbery};
	std::string	name[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	std::transform(form.begin(), form.end(), form.begin(), ::tolower);
	Form * request = NULL;
	try
	{
		int i = -1;
		while (++i < 3)
		{
			if (name[i].compare(form) == 0)
			{
				std::cout << "Intern created " << name[i] << std::endl;
				request = fform[i](target);
				return (request);
			}
		}
		if (target.empty())
			throw Intern::InvalidTarget();
		throw Intern::InvalidForm();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return NULL;
}