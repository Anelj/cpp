#ifndef INTERN_H
# define INTERN_H

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
public:
	Intern();
	Intern(const std::string &target);
	Intern(const Intern& rrf);
	Intern& operator=(const Intern& b);
	Form *makeShrubberyCreationForm(const std::string& target) const;
	Form *makeRobotomyRequestForm(const std::string& target) const;
	Form *makePresidentialPardonForm(const std::string& target) const;
	Form *makeForm(const std::string& name, const std::string& target) const;
	virtual ~Intern();
};


#endif