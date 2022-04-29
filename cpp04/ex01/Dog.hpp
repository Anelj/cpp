#ifndef DOG_H
#define DOG_H

# include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	Brain* brain;
public:
	Dog();

	Dog(Dog const &cl);

	Dog& operator=(const Dog &rhs);

	virtual void makeSound() const;

	virtual ~Dog();
};


#endif
