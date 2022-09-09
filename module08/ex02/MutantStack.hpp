/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 22:56:09 by dcyprien          #+#    #+#             */
/*   Updated: 2022/09/09 17:11:39 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

#include <stack>
#include <vector>

template<typename T>
class MutantStack: private std::stack<T, std::vector<T> >{
	public:
		MutantStack<T>(){
			return;
		}
		~MutantStack<T>(void){
			return;
		}

		void	push(const T &value){
			this->_stack.push(value);
		}
	private:
		std::stack<T, std::vector<T> >	_stack;
};

#endif