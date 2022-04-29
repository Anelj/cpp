#ifndef ICE_H
# define ICE_H

# include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	Ice(const Ice& cl);
	virtual ~Ice();
	Ice& operator=(const Ice &rhs);
	virtual void use(ICharacter& target);
	virtual AMateria* clone() const;
};


#endif
