#include "Character.hpp"

Character::Character(const std::string &name)
{
	this->name = name;
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character() : name("default")
{
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character(const Character& ch)
{
	*this = ch;
}

Character& Character::operator=(const Character& ch)
{
	name = ch.name;
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i])
			delete inventory[i];
	}
	for (int i = 0; i < 4; i++)
	{
		if (ch.inventory[i])
		{
			inventory[i] = ch.inventory[i]->clone();
		} else
		{
			inventory[i] = NULL;
		}
	}
	return *this;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i])
			delete inventory[i];
	}
}

std::string const &Character::getName() const
{
	return name;
}


void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && inventory[idx])
		inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && inventory[idx])
		inventory[idx]->use(target);
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] == m)
			return;
	}
	for (int i = 0; i < 4; i++)
	{
		if (!inventory[i])
		{
			inventory[i] = m;
			break;
		}
	}
}
