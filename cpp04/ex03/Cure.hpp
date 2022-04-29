#ifndef CURE_H
# define CURE_H

# include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	Cure(const Cure& cl);
	virtual ~Cure();
	Cure& operator=(const Cure &rhs);
	virtual void use(ICharacter& target);
	virtual Cure* clone() const;
};

#endif
