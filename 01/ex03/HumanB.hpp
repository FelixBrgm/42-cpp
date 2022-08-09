#ifndef HUMANB
#define HUMANB
#include "Weapon.hpp"
class HumanB
{
	private:
		std::string name;
		Weapon *weapon;
	public:
		HumanB(std::string _name);
		~HumanB();
		void attack();
		void setWeapon(Weapon &_weapon);
};

#endif