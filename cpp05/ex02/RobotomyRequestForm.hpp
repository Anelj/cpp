#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

# include "Form.hpp"
#include "ctime"

class RobotomyRequestForm : public Form
{
public:
	RobotomyRequestForm();
	RobotomyRequestForm(const std::string &target);
	RobotomyRequestForm(const RobotomyRequestForm& rrf);
	RobotomyRequestForm& operator=(const RobotomyRequestForm& b);
	virtual ~RobotomyRequestForm();
	virtual void action() const;
};


#endif
