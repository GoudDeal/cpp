#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void){
	Bureaucrat michel("Michel", 150);
	Bureaucrat president("Xavier", 1);
	Bureaucrat manager("Jacques", 50);
	Intern randomIntern;
	Form * rq;
	Form * pp;
	Form * sc;

	rq = randomIntern.makeForm("robotomy request", "Michel");
	pp = randomIntern.makeForm("presidential pardon", "Michel");
	sc = randomIntern.makeForm("shrubbery creation", "Michel");
	std::cout << michel << std::endl;
	michel.executeForm(*sc);
	michel.signForm(*sc);
	manager.signForm(*sc);
	michel.executeForm(*sc);
	for (int i = 0; i < 50; i++){
		michel.incrementGrade();
	}
	std::cout << "Michel received a promotion" << std::endl;
	michel.executeForm(*sc);
	michel.executeForm(*rq);
	michel.signForm(*rq);
	manager.signForm(*rq);
	michel.executeForm(*rq);
	for (int i = 0; i < 10; i++){
		president.executeForm(*rq);
	}
	std::cout << "Michel did something really bad." << std::endl;
	manager.signForm(*pp);
	president.signForm(*pp);
	president.executeForm(*pp);
	delete sc;
	delete rq;
	delete pp;
	return 1;
}