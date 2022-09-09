/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 22:05:53 by dcyprien          #+#    #+#             */
/*   Updated: 2022/08/21 08:38:33 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <iostream>

uintptr_t	serialize(Data *ptr){
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*		deserialize(uintptr_t raw){
	return reinterpret_cast<Data *>(raw);
}

int main(void){
	Data*	data = new Data;
	uintptr_t ptr;

	data->type = "Youpi";
	data->value = 42;

	std::cout << "Data type : " << data->type << std::endl;
	std::cout << "Data value : " << data->value << std::endl;
	std::cout << "Adress of data : " <<data << std::endl << std::endl;
	ptr = serialize(data);
	std::cout << "Data has been serialized and casted to an uintptr_t." << std::endl;
	std::cout << "Value of uintptr_t : " << ptr << std::endl << std::endl;
	data = deserialize(ptr);
	std::cout << "Data has been deserialized." << std::endl;
	std::cout << "Data type : " << data->type << std::endl;
	std::cout << "Data value : " << data->value << std::endl;
	std::cout << "Adress of data : " <<data << std::endl << std::endl;
	return 1;
}