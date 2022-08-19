/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 17:27:28 by dcyprien          #+#    #+#             */
/*   Updated: 2022/08/19 17:41:54 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(void){
	float n = 0.0f;
	Convert convert(n);

	std::cout << convert.toChar() << std::endl;
	return 1;
}