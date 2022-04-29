#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		src[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource& m)
{
	*this = m;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& m)
{
	for (int i = 0; i < 4; i++)
	{
		if (src[i])
			delete src[i];
	}
	for (int i = 0; i < 4; i++)
	{
		if (m.src[i])
			src[i] = m.src[i]->clone();
		else
			src[i] = NULL;
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (src[i])
			delete src[i];
	}
}

void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (src[i] == m)
			return;
	}
	for (int i = 0; i < 4; i++)
	{
		if (!src[i])
		{
			src[i] = m;
			break;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (src[i] && !(src[i]->getType().compare(type)))
			return src[i]->clone();
	}
	return NULL;
}