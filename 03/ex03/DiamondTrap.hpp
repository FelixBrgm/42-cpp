
#ifndef DIAMONDTRAP
# define DIAMONDTRAP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		std::string name;
		using FragTrap :: hp;
		using ScavTrap :: ep;
		using FragTrap :: ad;
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const & copy);

		void operator= (DiamondTrap const & src);

		using ScavTrap :: attack;

		void whoAmI();

		~DiamondTrap();
};

#endif