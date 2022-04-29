#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>
#include "Form.hpp"
class Form;
class Bureaucrat
{
	const std::string	name;
	int 				grade;
public:
	Bureaucrat(const std::string &name, int grade);
	Bureaucrat();
	Bureaucrat(const Bureaucrat& b);
	Bureaucrat& operator=(const Bureaucrat& b);
	virtual ~Bureaucrat();
	void incrementGrade();
	void decrementGrade();
	const std::string &getName() const;
	int getGrade() const;
	void signForm(Form& f);
	class GradeTooHighException : public std::exception
{
	public:
	virtual const char* what() const throw()
	{
		return "Grade is too high";
	}
};

class GradeTooLowException : public std::exception
{
public:
	virtual const char* what() const throw()
	{
		return "Grade is too low";
	}
};
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

#endif
