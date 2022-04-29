#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>

class Brain
{
	std::string ideas[100];
public:

	Brain();

	Brain(const Brain& brain);

	Brain& operator=(const Brain &rhs);

	const std::string *getIdeas() const;

	virtual ~Brain();

};


#endif
