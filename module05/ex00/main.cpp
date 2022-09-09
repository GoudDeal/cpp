#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void){
	Bureaucrat test("Michel", 150);

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
	std::cout << test;
	return 1;
}