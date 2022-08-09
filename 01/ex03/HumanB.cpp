#include "HumanB.hpp"

HumanB::HumanB(std::string _name)
{
	name = _name;
	weapon = nullptr;
}

HumanB::~HumanB()
{

}

void HumanB::attack()
{
	if (weapon == nullptr)
		std::cout << "No weapon equiped!" << std::endl;
	else
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &_weapon)
{
	weapon = &_weapon;
}