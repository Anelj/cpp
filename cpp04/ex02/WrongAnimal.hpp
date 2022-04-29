#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

# include <iostream>

class WrongAnimal
{
protected:
	std::string type;
public:

	WrongAnimal();

	WrongAnimal(WrongAnimal const &cl);

	WrongAnimal& operator=(const WrongAnimal &rhs);

	void makeSound() const;

	virtual ~WrongAnimal();

	const std::string &getType() const;
};


#endif
