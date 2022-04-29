#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name),
															 grade(grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat() : name("default"), grade(150)
{}

Bureaucrat::Bureaucrat(const Bureaucrat& b) : name(b.name)
{
	*this = b;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& b)
{
	if (this != &b)
		grade = b.grade;
	return *this;
}

Bureaucrat::~Bureaucrat()
{
}

const std::string &Bureaucrat::getName() const
{
	return name;
}

int Bureaucrat::getGrade() const
{
	return grade;
}

void Bureaucrat::incrementGrade()
{
	if (grade == 1)
		throw GradeTooHighException();
	grade--;
}

void Bureaucrat::decrementGrade()
{
	if (grade == 150)
		throw GradeTooLowException();
	grade++;
}

void Bureaucrat::signForm(Form& f)
{
	try
	{
		f.beSigned(*this);
		std::cout << name << " signed " << f.getFname() << std::endl;
	}
	catch (Form::GradeTooLowException& e)
	{
		std::cout << name << " couldn’t sign " << f.getFname()
				  << " because grade is too low.\n";
	}
	catch (std::exception& e)
	{
		std::cout << name << " couldn’t sign " << f.getFname()
				  << " because it is signed.\n";
	}
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat)
{
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return os;
}
