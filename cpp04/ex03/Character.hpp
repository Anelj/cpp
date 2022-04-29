#ifndef CHARACTER_H
# define CHARACTER_H

# include "ICharacter.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class Character : public ICharacter
{
	AMateria	*inventory[4];
	std::string	name;
public:
	Character(const std::string &name);
	Character();
	Character(const Character& ch);
	Character& operator=(const Character& ch);
	virtual ~Character();
	virtual std::string const &getName() const;
	virtual void unequip(int idx);

	virtual void equip(AMateria *m);

	//virtual void equip(AMateria* m);
	virtual void use(int idx, ICharacter& target);
};


#endif