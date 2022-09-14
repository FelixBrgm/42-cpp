#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	this->hp = 100;
	this->ep = 100;
	this->ad = 30;
	std::cout << "FragTrap " << this->name << " created. -->Default" << std::endl;
}

FragTrap::FragTrap(std::string str): ClapTrap(str)
{
	this->hp = 100;
	this->ep = 100;
	this->ad = 30;
	std::cout << "FragTrap " << this->name << " created." << std::endl;
}

FragTrap::FragTrap(FragTrap& copy): ClapTrap(copy.name)
{
	*this = copy;
	std::cout << "FragTrap " << this->name << " created. -->Copy" << std::endl;
}
FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->name << " destroyed" << std::endl;
}


//  ----------------------- OPERATOR OVERLOAD -----------------------
void FragTrap::operator= (FragTrap const & src )
{
	this->name = src.name;
	this->ep = src.ep;
	this->hp = src.hp;
	this->ad = src.ad;
}

//  ----------------------- METHODS -----------------------
void FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap " << this->name << " wants to have positive high fives" << std::endl;
}
