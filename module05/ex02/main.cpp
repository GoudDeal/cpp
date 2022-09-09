#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void){
	Bureaucrat michel("Michel", 150);
	Bureaucrat president("Xavier", 1);
	Bureaucrat manager("Jacques", 50);
	ShrubberyCreationForm shrubbery("cour");
	PresidentialPardonForm formulaire("Michel");
	RobotomyRequestForm robotomy("Michel");

	std::cout << michel << std::endl;
	michel.executeForm(shrubbery);
	michel.signForm(shrubbery);
	manager.signForm(shrubbery);
	michel.executeForm(shrubbery);
	for (int i = 0; i < 50; i++){
		michel.incrementGrade();
	}
	std::cout << "Michel received a promotion" << std::endl;
	michel.executeForm(shrubbery);
	michel.executeForm(robotomy);
	michel.signForm(robotomy);
	manager.signForm(robotomy);
	michel.executeForm(robotomy);
	for (int i = 0; i < 10; i++){
		president.executeForm(robotomy);
	}
	std::cout << "Michel did something relly bad." << std::endl;
	manager.signForm(formulaire);
	president.signForm(formulaire);
	president.executeForm(formulaire);
	return 1;
}