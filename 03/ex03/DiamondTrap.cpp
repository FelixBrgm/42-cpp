
#include "DiamondTrap.hpp"

//  ----------------------- CONSTRUCTORS & DESTRUCTOR -----------------------
DiamondTrap::DiamondTrap(): ClapTrap("Random_clap_name"), ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap " << this->name << " created. -->Default" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap()
{
	this->name = name;
	std::cout << "DiamondTrap " << this->name << " created." << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & copy)
{
	*this = copy;
	std::cout << "DiamondTrap " << this->name << " created. -->Copy" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->name << " destroyed." << std::endl;
}

//  ----------------------- OPERATOR OVERLOAD -----------------------
void DiamondTrap::operator= (DiamondTrap const & src)
{
	this->name = src.name;
	this->ep = src.ep;
	this->hp = src.hp;
	this->ad = src.ad;
}

//  ----------------------- METHODS -----------------------
void DiamondTrap::whoAmI( void )
{
	std::cout << "DiamondTrap's name is " << this->name << std::endl;
	std::cout << "ClapTrap's name is " << ClapTrap::name << std::endl;
}