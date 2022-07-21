/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 18:04:14 by dcyprien          #+#    #+#             */
/*   Updated: 2022/06/15 14:01:29 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

Contact::Contact()
{
	return;
}

Contact::~Contact()
{
	return;
}

std::string	Contact::getFirstName() const
{
	return this->_firstname;
}

std::string Contact::getLastName() const
{
	return this->_lastname;
}

std::string	Contact::getNickName() const
{
	return this->_nickname;
}

std::string	Contact::getPhone() const
{
	return this->_phone;
}

std::string	Contact::getSecret() const
{
	return this->_secret;
}

int			Contact::getIndex() const
{
	return this->_index;
}

void		Contact::setFirstName(std::string name)
{
	this->_firstname = name;
}

void		Contact::setLastName(std::string name)
{
	this->_lastname = name;
}

void		Contact::setNickName(std::string name)
{
	this->_nickname = name;
}

void		Contact::setPhone(std::string phone)
{
	this->_phone = phone;
}

void		Contact::setSecret(std::string secret)
{
	this->_secret = secret;
}

void		Contact::setIndex(int index)
{
	this->_index = index;
}

void	Contact::print()
{
	std::cout << "Index: " << this->_index << std::endl;
	std::cout << "First name: " << this->_firstname << std::endl;
	std::cout << "Last name: " << this->_lastname << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Phone number: " << this->_phone << std::endl;
	std::cout << "Darkest secret: " << this->_secret << std::endl;
}