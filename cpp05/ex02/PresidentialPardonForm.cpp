#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() :
		Form("PresidentialPardonForm", 25, 5)
{}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) :
		Form("PresidentialPardonForm", 25, 5, target)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& rrf) :
		Form(rrf)
{}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& b)
{
	b.getTarget();
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{}

void PresidentialPardonForm::action() const
{
	std::cout << " has been pardoned by Zaphod Beeblebrox.\n";
}
