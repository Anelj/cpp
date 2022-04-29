#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	Brain* brain;
public:

	Cat();

	Cat(const Cat &cl);

	Cat& operator=(const Cat &rhs);

	 virtual void makeSound() const;

	virtual ~Cat();
};


#endif
