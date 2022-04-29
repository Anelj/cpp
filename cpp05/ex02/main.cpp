#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	int grade = 11;
	std::string name = "bur";

	Bureaucrat bur(name, grade);
	std::cout << bur << std::endl;
	ShrubberyCreationForm scf("home");
	bur.signForm(scf);
	bur.executeForm(scf);
	PresidentialPardonForm ppf("president");
	bur.signForm(ppf);
	bur.executeForm(ppf);
	RobotomyRequestForm rrf("robot");
	bur.executeForm(rrf);
	bur.signForm(rrf);
}
