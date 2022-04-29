#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() :
		Form("ShrubberyCreationForm", 145, 137)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) :
		Form("ShrubberyCreationForm", 145, 137, target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& rrf) :
		Form(rrf)
{}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& b)
{
	b.getTarget();
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

void ShrubberyCreationForm::action() const
{
	std::ofstream myfile(
			(getTarget() + "_shrubbery").c_str(), std::ios::out |
			std::ios::trunc);
	if (myfile.is_open())
	{
		myfile << " ASCII tree\n";
		myfile << " ASCII tree\n";

		myfile.close();
	}
	else
		std::cout << "Unable to open file\n";
}