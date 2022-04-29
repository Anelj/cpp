#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"

class Cat : public Animal
{
public:

	Cat();

	Cat(const Cat &cl);

	Cat& operator=(const Cat &rhs);

	 virtual void makeSound() const;

	virtual ~Cat();
};


#endif
