#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
public:
	PresidentialPardonForm();
	PresidentialPardonForm(const std::string &target);
	PresidentialPardonForm(const PresidentialPardonForm& rrf);
	PresidentialPardonForm& operator=(const PresidentialPardonForm& b);
	virtual ~PresidentialPardonForm();
	virtual void action() const;
};


#endif
