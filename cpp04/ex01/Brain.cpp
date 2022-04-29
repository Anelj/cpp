#include <cstring>
#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor." << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = "";
}

Brain::Brain(const Brain& brain)
{
	std::cout << "Brain copy constructor." << std::endl;
	*this = brain;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain& Brain::operator=(const Brain &rhs)
{
	std::cout << "Brain copy assignment operator" << std::endl;
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = rhs.getIdeas()[i];
	}
	return *this;
}

const std::string *Brain::getIdeas() const
{
	return ideas;
}

