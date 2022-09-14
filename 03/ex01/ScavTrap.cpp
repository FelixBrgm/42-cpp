#include "ScavTrap.hpp"

//  ----------------------- CONSTRUCTORS & DESTRUCTOR -----------------------

ScavTrap::ScavTrap(): ClapTrap()
{
	this->hp = 100;
	this->ep = 50;
	this->ad = 20;
	std::cout << "Scavtrap " << this->name << " created. -->Default" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->hp = 100;
	this->ep = 50;
	this->ad = 20;
	std::cout << "Scavtrap " << this->name << " created." << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const &copy ): ClapTrap(copy.name)
{
	*this = copy;
	std::cout << "Scavtrap " << this->name << " created. -->Copy" << std::endl;
}

ScavTrap::~ScavTrap() {std::cout << "Scavtrap " << this->name << " destroyed" << std::endl;}

//  ----------------------- OPERATOR OVERLOAD -----------------------
void ScavTrap:: operator= ( ScavTrap const & src )
{
	this->name = src.name;
	this->ep = src.ep;
	this->hp = src.hp;
	this->ad = src.ad;
}

//  ----------------------- METHODS -----------------------
void ScavTrap::attack( std::string const & target )
{
	if (this->hp > 0 && this->ep > 0)
	{
		std::cout << "Scavtrap " << this->name << " attacks " << target << ", causing " << this->ad << " points of damage" << std::endl;
		this->ep--;
	}
	else
		std::cout << "Scavtrap " << this->name << " has no energy points to attack " << target << std::endl;
}


void ScavTrap::guardGate()
{
	std::cout << "Scavtrap " << this->name << " is now in Gatekeeper mode." << std::endl;
}
