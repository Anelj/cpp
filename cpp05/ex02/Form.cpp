#include "Form.hpp"

Form::Form(const std::string &fname, const int gradeToSign, const int gradeToEx)
		: fname(fname), fSigned(false), gradeToSign(gradeToSign),
		gradeToEx(gradeToEx), target("default_target")
{
	if (gradeToSign < 1 || gradeToEx < 1)
		throw GradeTooHighException();
	if (gradeToSign > 150 || gradeToEx > 150)
		throw GradeTooLowException();
}

Form::Form(const std::string &fname, const int gradeToSign,
		   const int gradeToEx, const std::string &target) : fname(fname),
															 fSigned(false),
															 gradeToSign(
																	 gradeToSign),
															 gradeToEx(
																	 gradeToEx),
															 target(target)
{}

Form::Form() : fname("default"), fSigned(false), gradeToSign(150),
	gradeToEx(150), target("default_target")
{}

Form::Form(const Form& f) : fname(f.fname), fSigned(false),
	gradeToSign(f.gradeToSign), gradeToEx(f.gradeToEx), target(f.target)
{}

Form& Form::operator=(const Form& b)
{
	b.getTarget();
	return *this;
}

std::ostream &operator<<(std::ostream &os, const Form &form)
{
	os << "fname: " << form.getFname() << " fSigned: " << form.isFSigned()
	   << " gradeToSign: " << form.getGradeToSign() << " gradeToEx: "
	   << form.getGradeToEx() << " target: " << form.getTarget();
	return os;
}

Form::~Form()
{}

const std::string &Form::getFname() const
{
	return fname;
}

int Form::getGradeToSign() const
{
	return gradeToSign;
}

int Form::getGradeToEx() const
{
	return gradeToEx;
}

const std::string &Form::getTarget() const
{
	return target;
}

bool Form::isFSigned() const
{
	return fSigned;
}

void Form::beSigned(const Bureaucrat& b)
{
	if (isFSigned())
		throw std::exception();
	if (b.getGrade() > gradeToSign)
	{
		throw GradeTooLowException();
	}
	fSigned = true;
}

void Form::execute(Bureaucrat const & executor) const
{
	if (!isFSigned())
		throw std::exception();
	if (executor.getGrade() > getGradeToEx())
		throw GradeTooLowException();
	action();
}
