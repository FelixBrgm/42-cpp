#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <iostream>
class Weapon
{
	private:
		std::string type;
	public:
		Weapon();
		Weapon(std::string _type);
		~Weapon();
		std::string &getType(void);
		void setType(std::string _type);
};

#endif