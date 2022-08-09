#ifndef HUMANA
#define HUMANA
#include "Weapon.hpp"
class HumanA
{
	private:
		std::string name;
		Weapon &weapon;
	public:
		HumanA(std::string _name, Weapon &_weapon);
		~HumanA();
		void attack();
};

#endif