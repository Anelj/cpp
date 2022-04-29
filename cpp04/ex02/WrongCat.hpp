#ifndef WRONGCAT_H
# define WRONGCAT_H

# include "WrongAnimal.hpp"
#include "Brain.hpp"

class WrongCat : public WrongAnimal
{
	Brain *brain;
public:

	WrongCat();

	WrongCat(WrongCat const &cl);

	WrongCat& operator=(const WrongCat &rhs);

	virtual ~WrongCat();

	Brain *getBrain() const;

	void makeSound() const;
};


#endif
