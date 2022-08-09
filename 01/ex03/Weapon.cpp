#include "Weapon.hpp"

Weapon::Weapon()
{
	
}

Weapon::Weapon(std::string _type)
{
	type = _type;
}

Weapon::~Weapon()
{
	
}

std::string &Weapon::getType(void)
{
	return type;
}

void Weapon::setType(std::string _type)
{
	type = _type;
}

