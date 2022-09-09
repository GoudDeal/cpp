/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 16:37:34 by dcyprien          #+#    #+#             */
/*   Updated: 2022/09/08 22:09:48 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void print(std::string const str){
	std::cout << str << std::endl;
}

int main()
{
	Span sp = Span(10000);
	Span nul = Span(5);
	Span nnumbers = Span(10);
	int array[10] = {0,1,2,3,4,5,6,7,8,9};

	print("Adding 10000 numbers to the span");
	for (int i = 0; i < 10000; i++){
		sp.addNumber(i);
	}
	print("Try and catch for adding the 10001 number to the span");
	try{
		sp.addNumber(12);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	print("shortestSpan test");
	std::cout << sp.shortestSpan() << std::endl;
	print("longestSpan test");
	std::cout << sp.longestSpan() << std::endl;
	std::cout << std::endl;
	print("longestSpan on empty span");
	try{
		std::cout << nul.longestSpan() << std::endl;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	print("Adding 5 and 9 and trying longestSpan");
	try{
		nul.addNumber(5);
		nul.addNumber(9);
		std::cout << nul.longestSpan() << std::endl;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	print("Try and catch adding 5 numbers to a span (Resulting in exceeding the capacity of the Span)");
	try{
		nul.addNNumbers(array, 5);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	print("Adding 10 numbers to a Span");
	try{
		nnumbers.addNNumbers(array, 10);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	print("Printing first span");
	nul.print();
	std::cout << std::endl;
	print("Printing test Span with 10 numbers");
	nnumbers.print();
	std::cout << std::endl;
	print("I'd rather not print the span with 10000 numbers so I will not do it");
	print("But maybe you want to see it ? (yes/no)");
	std::string answer;
	std::getline(std::cin, answer);
	if (std::cin.eof())
	{
		print("I take this as a no. See you then ! xoxo");
		return 0;
	}
	std::transform(answer.begin(), answer.end(), answer.begin(), ::tolower);
	if (answer.compare("yes") == 0){
		print("Alright then...");
		std::cout << std::endl;
		sp.print();
		return 0;
	}
	else if (answer.compare("no") == 0){
		print("That's what I thought.");
		return 0;
	}
	print("I didn't understand so I'll just ignore you");
	return 0;
}