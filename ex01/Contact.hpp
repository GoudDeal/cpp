/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 16:59:17 by dcyprien          #+#    #+#             */
/*   Updated: 2022/06/15 14:00:44 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include "Phonebook.hpp"

class Contact {

public:
	Contact(void);
	~Contact(void);

	std::string	getFirstName() const;
	std::string	getLastName() const;
	std::string	getNickName() const;
	std::string getPhone() const;
	std::string	getSecret() const;
	int			getIndex() const;
	void		setFirstName(std::string name);
	void		setLastName(std::string name);
	void		setNickName(std::string name);
	void		setPhone(std::string phone);
	void		setSecret(std::string secret);
	void		setIndex(int index);
	void		print();

private:
	int _index;
	std::string _firstname;
	std::string _lastname;
	std::string _nickname;
	std::string _phone;
	std::string _secret;
};

#endif