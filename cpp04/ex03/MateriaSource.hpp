#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	AMateria *src[4];
public:
	MateriaSource();
	MateriaSource(const MateriaSource& m);
	MateriaSource& operator=(const MateriaSource& m);
	virtual ~MateriaSource();
	virtual void learnMateria(AMateria* m);
	virtual AMateria* createMateria(std::string const & type);
};


#endif
