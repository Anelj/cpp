#include "RobotomyRequestForm.hpp"
#include <cstdlib>
RobotomyRequestForm::RobotomyRequestForm() :
Form("RobotomyRequestForm", 72, 45)
{}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) :
Form("RobotomyRequestForm", 72, 45, target)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& rrf) :
Form(rrf)
{}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& b)
{
	b.getTarget();
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{}

void RobotomyRequestForm::action() const
{
	if (rand() % 2)
		std::cout << getTarget() << " has been robotomized successfully.\n";
	else
		std::cout << "The robotomy failed\n";
}
