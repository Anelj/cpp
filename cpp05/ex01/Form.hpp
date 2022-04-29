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
public:
	Form(const std::string &fname, const int gradeToSign, const int gradeToEx);

	Form();
	Form(const Form& f);
	Form& operator=(const Form& b);

	virtual ~Form();

	const std::string &getFname() const;

	bool isFSigned() const;

	int getGradeToSign() const;

	int getGradeToEx() const;

	void beSigned(const Bureaucrat& b);

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
