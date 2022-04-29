#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>

class Animal
{
protected:
	std::string type;

public:

	Animal();

	Animal(const Animal &cl);

	Animal& operator=(const Animal &rhs);

	const std::string &getType() const;

	virtual void makeSound() const = 0;

	virtual ~Animal();
};


#endif
