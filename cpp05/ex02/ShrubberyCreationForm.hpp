#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form
{
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string &target);
	ShrubberyCreationForm(const ShrubberyCreationForm& rrf);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& b);
	virtual ~ShrubberyCreationForm();
	virtual void action() const;
};


#endif
