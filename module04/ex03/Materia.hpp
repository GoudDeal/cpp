/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 21:22:15 by dcyprien          #+#    #+#             */
/*   Updated: 2022/07/31 00:15:18 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_HPP
# define MATERIA_HPP

#include <string>
#include <iostream>

class ICharacter;

class AMateria {

	public:
		AMateria(void);
		AMateria(std::string const & type);
		virtual ~AMateria(void);

		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target) = 0;
		virtual void setType(std::string const type) = 0;

	protected:
		std::string _type;
};

class Ice: public AMateria{
	
	public:
		Ice(void);
		Ice(Ice const & src);
		~Ice(void);

		Ice & operator=(Ice const & rhs);

		void setType(std::string const type);
		void use(ICharacter & target);
		AMateria* clone(void) const;
};

class Cure: public AMateria{

	public: 
		Cure(void);
		Cure(Cure const & src);
		~Cure(void);

		Cure & operator=(Cure const &rhs);
		
		void setType(std::string const type);
		void use(ICharacter & target);
		AMateria* clone(void) const;
};

#endif