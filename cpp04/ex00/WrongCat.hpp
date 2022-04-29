#ifndef WRONGCAT_H
# define WRONGCAT_H

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:

	WrongCat();

	WrongCat(WrongCat const &cl);

	WrongCat& operator=(const WrongCat &rhs);

	virtual ~WrongCat();

	void makeSound() const;
};


#endif
