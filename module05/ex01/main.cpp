#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void){
	Bureaucrat michel("Michel", 150);
	Form formulaire("Formulaire", 150,150);
	Form super("super", 149, 149);

	std::cout << michel << std::endl;
	std::cout << formulaire << std::endl;
	std::cout << super << std::endl;
	michel.signForm(formulaire);
	michel.signForm(super);
	michel.incrementGrade();
	std::cout << michel << std::endl;
	michel.signForm(super);
	michel.signForm(super);

	try 
	{
		Bureaucrat test1("Jacques", 151);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try 
	{
		Bureaucrat test2("Bernard", 0);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try 
	{
		Form a("a", 0,0);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try 
	{
		Form b("b", 151,151	);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << michel;
	return 1;
}