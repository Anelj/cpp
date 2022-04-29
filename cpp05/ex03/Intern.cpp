#include "Intern.hpp"

Intern::Intern()
{}

Intern::Intern(const Intern& rrf)
{
	*this = rrf;
}

Intern& Intern::operator=(const Intern& b)
{
	if (this == &b)
		return *this;
	return *this;
}

Intern::~Intern()
{}

Form *Intern::makeRobotomyRequestForm(const std::string& target) const
{
	return new RobotomyRequestForm(target);
}

Form *Intern::makePresidentialPardonForm(const std::string& target) const
{
	return new PresidentialPardonForm(target);
}

Form *Intern::makeShrubberyCreationForm(const std::string& target) const
{
	return new ShrubberyCreationForm(target);
}

Form *Intern::makeForm(const std::string& name, const std::string& target)
const
{
	std::string names[] = {std::string("shrubbery creation"),
						   std::string("robotomy request"),
						   std::string("presidential pardonF")};
	Form *(Intern::*forms[])(const std::string&) const =
			{&Intern::makePresidentialPardonForm,
			 &Intern::makeRobotomyRequestForm,
			 &Intern::makeShrubberyCreationForm};
	Form *f = NULL;
	for (int i = 0; i < 3; i++)
	{
		if (names[i] == name)
		{
			f = (this->*forms[i])(target);
			std::cout << "Intern creates " << *f << std::endl;
			return f;
		}
	}
	std::cerr << "There is no form with name " << name << std::endl;
	return NULL;
}
