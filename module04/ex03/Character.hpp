/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 21:57:14 by dcyprien          #+#    #+#             */
/*   Updated: 2022/07/31 01:32:25 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
#include <string>

class AMateria;

class ICharacter{
	public:
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

class Character : public ICharacter{
	public:
		Character(void);
		Character(std::string const name);
		Character(Character const & src);
		~Character(void);

		std::string const & getName() const;
		AMateria * getItem(int const index)const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

		Character & operator=(Character const &rhs);

	private:
		AMateria * _inv[4];
		std::string _name;
};

#endif