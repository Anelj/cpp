#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
int main()
{
	int grade = 11;
	std::string name = "bur";

	Bureaucrat bur(name, grade);
	std::cout << bur << std::endl;
	Form f("f", 10, 5);
	bur.signForm(f);
	bur.incrementGrade();
	std::cout << "increment: " << bur << std::endl;
	bur.signForm(f);
}
