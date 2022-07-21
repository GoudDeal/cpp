/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 16:42:58 by dcyprien          #+#    #+#             */
/*   Updated: 2022/07/21 16:42:48 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

int		Phonebook::num = 0;

Phonebook::Phonebook()
{
	return;
}

Phonebook::~Phonebook()
{
	return;
}

void	Phonebook::add()
{
	int i = 0;
	Contact	newc;
	std::string str;

	while (i < Phonebook::num)
		i++;
	if (i >= 8)
	{
		this->del(Phonebook::num);
		i--;
	}
	std::cout << "Enter your contact's first name:" << std::endl;
	std::getline(std::cin, str, '\n');
	if (std::cin.eof())
		return;
	newc.setFirstName(str);
	std::cout << "Enter your contact's last name:" << std::endl;
	std::getline(std::cin, str, '\n');
	if (std::cin.eof())
		return;
	newc.setLastName(str);
	std::cout << "Enter your contact's nickname:" << std::endl;
	std::getline(std::cin, str, '\n');
	if (std::cin.eof())
		return;
	newc.setNickName(str);
	std::cout << "Enter your contact's phone number:" << std::endl;
	std::getline(std::cin, str, '\n');
	if (std::cin.eof())
		return;
	newc.setPhone(str);
	std::cout << "Enter your contact's darkest secret:" << std::endl;
	std::getline(std::cin, str, '\n');
	if (std::cin.eof())
		return;
	newc.setSecret(str);
	newc.setIndex(i);
	this->_list[i] = newc;
	Phonebook::num++;
}

void	Phonebook::del(int num)
{
	int i = 0;
	while (i < num - 1)
	{
		this->_list[i] = this->_list[i + 1];
		this->_list[i].setIndex(this->_list[i].getIndex() - 1);
		i++;
	}
	Phonebook::num--;
}

int		Phonebook::_strisdigit(std::string str)
{
	int i = 0;

	while (str[i])
	{
		if (std::isdigit(str[i]))
			i++;
		else
			return (0);
	}
	return (1);
}

void	Phonebook::search()
{
	int i = 0;
	std::string index = "42";

	if (this->num == 0)
	{
		std::cout << "I am not sure what you are searching for. There is no contacts to be found there." << std::endl;
		return ;
	}
	while (i < this->num)
	{
		std::cout << "         " << this->_list[i].getIndex() << "|";
		if (this->_list[i].getFirstName().size() > 10)
			std::cout << this->_list[i].getFirstName().substr(0, 9) << ".|";
		else
		{
			for (int x = 0; x < (int)(10 - this->_list[i].getFirstName().size()); x++)
				std::cout << " ";
			std::cout << this->_list[i].getFirstName() << "|";
		}
		if (this->_list[i].getLastName().size() > 10)
			std::cout << this->_list[i].getLastName().substr(0, 9) << ".|";
		else
		{
			for (int x = 0; x < (int)(10 - this->_list[i].getLastName().size()); x++)
				std::cout << " ";
			std::cout << this->_list[i].getLastName() << "|";
		}
		if (this->_list[i].getNickName().size() > 10)
			std::cout << this->_list[i].getNickName().substr(0, 9) << "." << std::endl;
		else
		{
			for (int x = 0; x < (int)(10 - this->_list[i].getNickName().size()); x++)
				std::cout << " ";
			std::cout << this->_list[i].getNickName() << std::endl;
		}
		i++;
	}
	while (std::strtol(index.c_str(), NULL, 10) < 0 || std::strtol(index.c_str(), NULL, 10) > 7 || Phonebook::_strisdigit(index) == 0 || std::strtol(index.c_str(), NULL, 10) > (Phonebook::num - 1))
	{
		std::cout << "Enter the index of the contact you wish to see :" << std::endl;
		std::getline(std::cin, index, '\n');
		if (std::cin.eof())
			return;
	}
	this->_list[std::strtol(index.c_str(), NULL, 10)].print();
	return;
}

int main(void)
{
	Phonebook phonebook;
	std::string cmd;

	while (1)
	{
		if (!std::cin.eof())
			std::cout << "Enter a command:" << std::endl;
		std::getline(std::cin, cmd, '\n');
		if (std::cin.eof() == true)
			break;
		if (cmd.compare("ADD") == 0)
			phonebook.add();
		else if (cmd.compare("SEARCH") == 0)
			phonebook.search();
		else if (cmd.compare("EXIT") == 0)
			break;
		else
			std::cout << "Unknown command" << std::endl;
	}
	return (0);
}