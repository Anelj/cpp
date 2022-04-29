#ifndef FORM_H
# define FORM_H

# include <iostream>
# include "Bureaucrat.hpp"
class Bureaucrat;
class Form
{
	const std::string	fname;
	bool				fSigned;
	const int 			gradeToSign;
	const int 			gradeToEx;
	const std::string	target;
public:
	Form(const std::string &fname, const int gradeToSign, const int gradeToEx);
	Form(const std::string &fname, const int gradeToSign,
		 const int gradeToEx, const std::string &target);
	Form();
	Form(const Form& f);
	Form& operator=(const Form& b);
	virtual ~Form();
	const std::string &getFname() const;
	bool isFSigned() const;
	int getGradeToSign() const;
	int getGradeToEx() const;
	void beSigned(const Bureaucrat& b);
	void execute(Bureaucrat const & executor) const;
	virtual void action() const = 0;

	const std::string &getTarget() const;

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

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif
